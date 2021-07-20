#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	print_array(int *array, int n)
{
	int	i;

	i = 0;
	while (i < n)
		printf("%X", array[i++]);
	printf("\n");
}

int		check(int *array, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (array[i] == array[j]) // repeated line
			return (0);
		if (array[i] + i == array[j] + j) // descending diagonal
			return (0);
		if (array[i] - i == array[j] - j) // ascending diagonal
			return (0);
		j++;
	}
	return (1);
}

int		solve(int i, int *array, int n)
{
	int	sol_counter;
	int	x;

	if (i == n)
	{
		print_array(array, n);
		return (1);
	}
	sol_counter = 0;
	x = 0;
	while (x < n) // backtracking algo 
	{
		array[i] = x;
		if (check(array, i))
			sol_counter += solve(i + 1, array, n);
		x++;
	}
	return (sol_counter);
}

int		n_queens_puzzle(int n)
{
	int *array = malloc(sizeof(int) * n);
	if (!array)
		return (-1);
	return (solve(0, array, n));
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Usage: ./queenie N , where N is the chessboard size (N x N)\n");
		return (1);
	}
	int n = atoi(argv[1]);
	if (n < 1 || n > 16)
		printf("N must be in the [1, 16] range\n");
	printf("number of solutions: %d\n", n_queens_puzzle(n));
}
