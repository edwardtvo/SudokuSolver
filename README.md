Hello world! This is the README for my SudokuSolver C++ program.

Coding Features of SudokuSolver:

+ Backtracking Algorithmn
    This is an algorithmic technique that solves recursive problems. Simply put, the backtracking
    algorithm works like this: for every step of the problem, try one step at a time. If a step
    can not be solved, delete (or backtrack) that step, move to the previous step and try again
    with a new solution to the previous step. If the previous step can not be solved either, 
    backtrack again until we find a correct solution to continue. Repeat this until the whole 
    problem set is solved.
    
+ Sudoku Solver
    Although this program does not solve the Sudoku problem recursively in true Backtracking 
    fashion, my solution took inspiration from the general approach. My approach is this: 
    for every blank square in the sudoku, try to solve each one and go along from left to 
    right, top to bottom until the whole board is solved. 
    
+ Vectors
    I utilized 2D vectors to simulate a Sudoku board. I chose vectors over C++ arrays due 
    to the easy manipulation of vectors as well as less limitations in using vectors compared
    to C++ arrays. 
    
    
Instructions
  
+ Provided inside main.cpp is a 2D vector. Edit the 2D vector to simulate your Sudoku problem, 
  replacing empty squares in the Sudoku with zeros. Then, run the code! 
  
  
Further developments:

+ I didn't solve this problem recursively, but if anyone has a recursive solution to solving the Sudoku,
  please share it with me. Thank you!
