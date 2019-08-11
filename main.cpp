/* 

  =======================================================================

    Welcome to Sud#kuSolver() by Edward Vo
    Input in your new sudoku by editing the 2D vector below
    Put 0 to represent blank spaces

    Thanks for checking it out!

  =======================================================================

*/
#include <iostream>
#include <vector>
#include <string>
#include "func.h"
using namespace std;

int main() {

//Input in your new sudoku by editing the 2D vector below
// Put 0 to represent blank spaces

// edit this!
vector<vector<int>> sudoku {
  {0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 8, 5, 0, 0, 0, 6, 0, 0},
  {9, 2, 0, 0, 1, 0, 3, 0, 0},
  {1, 0, 0, 0, 6, 9, 0, 0, 4},
  {0, 0, 0, 0, 4, 0, 0, 2, 0},
  {0, 0, 0, 1, 0, 0, 0, 0, 5},
  {0, 0, 8, 0, 9, 0, 0, 3, 0},
  {6, 5, 0, 0, 2, 0, 4, 0, 0},
  {0, 4, 0, 0, 0, 0, 0, 0, 7}
};

// vector that carries indexes of 0s in the sudoku 2D vector
vector<int> blankSpaces;
// getting the indexes for aforementioned 0s index vector
vectorOfBlanks(blankSpaces, sudoku);
// main superstar of the program, solves the whole thing
solve(sudoku,blankSpaces);
cout << "Here's your solved sudoku! " << endl;
// prints out solved vector
printOutSudoku(sudoku);

return 0;
}
