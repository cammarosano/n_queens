# n_queens

A small program that outputs the solutions to the [n_queens](https://en.wikipedia.org/wiki/Eight_queens_puzzle) problem.

## But... WHY ???  
Because it uses the AWESOME __backtracking algorithm__! (yep, just for fun)

### Usage
compile: `gcc n_queens.c -o queenie`  
run: `./queenie N`, where N is the chessboard size (1 to 16)  
Obs: N values higher than 13 will take a while to solve...

### Output interpretation
From left to right: The first digit represents the position of the first queen in the first column (index starting at 0).  
The n-th digit represents the position of the n-th queen in the n-th column.  
Index ranges from 0-9 then A-F.

Example:  
The output of `./queenie 4` is:  
> 1302  
> 2031  
> number of solutions: 2

The first solution, __1302__, represents the following:  
![n_queens](https://user-images.githubusercontent.com/65516503/126387613-d9250ff1-626f-4722-a697-b64022074778.png)
