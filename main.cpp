#include <iostream>
#include <vector>
#include <string>
#include "functions.h"
using namespace std;

// https://www.techiedelight.com/vector-of-vector-cpp/

int main() {

vector<vector<int>> newSudoku {
  {4 ,8, 9, 5, 0, 1, 0, 2, 0},
  {7, 5, 0, 0, 0, 0, 8, 1, 0},
  {0, 0, 0, 0, 2, 0, 5, 9, 4},
  {0, 0, 8, 0, 9, 0, 0, 7, 5},
  {5, 0, 0, 0, 0, 8, 0, 0, 0},
  {0, 0, 1, 0, 0, 3, 0, 0, 0},
  {1, 6, 0, 3, 7, 4, 0, 8, 2},
  {0, 0, 0, 0, 0, 5, 7, 3, 6},
  {0, 0, 3, 0, 6, 2, 4, 5, 0}
};

// identify the blank squares and put the index in a vector 
vector<int> blankSpaces;
vectorOfBlanks(blankSpaces, newSudoku);


// loop to go through each empty square 
for (int row = 0; row < 9; row++) {
  for (int column = 0; column < 9; column++) {

    int index = row * 10 + column;

    if ( isEmptySquare(index, blankSpaces) ) {

    }
      

      // backtrack 


      
  }
}

printOutSudoku(newSudoku);
// function to check if a row/column/box has 8 tiles already
// make this not a 81 loop every time by having memory on each line/column.
// as soon as the value for any row/column hits 8, check that respective row/column

/* Pseudocode

  two vectors of predetermined coordinates (rows and columns)



  a loop over all the empty cells:


    if ( this square is empty )
      use the function to find a suitable number, starting from 0 

      recursive: call this function again, w/ parameter moving on to the next square 
      if recursive call is true, return true 
    if ( this square already has a number placed )
      get whatever number is there
      mark = number + 1;  
      use the function to find a suitable number, this time starting from the mark 
      








 */




return 0;
}