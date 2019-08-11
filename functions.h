#ifndef functions_h
#define functions_h
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// function to check if number already present in row
bool rowCheck(int number, int row, vector<vector<int>> & vect) {
  for (int i = 0; i < 9; i++) {
    if (number == vect.at(row).at(i)) 
      return false;
  }
  return true;
}

// function to check if number already present in column
bool columnCheck(int number, int column, vector<vector<int>> & vect) {
  for (int i = 0; i < 9; i++) {
    if (number == vect.at(i).at(column))
      return false;
  }
  return true;
}

// function to check if number already present in its corresponding 3 x 3 box
bool boxCheck(int number, int rowIndex, int columnIndex, vector<vector<int>> & vect) {

// reduce the current index to the top left box to fit the
// detection loop below 
  while (rowIndex % 3 > 0 || columnIndex % 3 > 0) {
    if (rowIndex % 3 > 0)
      rowIndex--;
    if (columnIndex % 3 > 0)
    columnIndex--;
  }
  // detection loop
  for (int a = rowIndex; a < rowIndex + 3; a++) {
    for (int b = columnIndex; b < columnIndex + 3; b++) {
      if (number == vect.at(a).at(b)) 
        return false;
      }
    }
  
  return true;
}

// the above 3 functions combined; checks to see if a number can be put in THIS spot
bool isSafeNumber(int temp, int rowIndex, int columnIndex, vector<vector<int>> & vect) {
  if (  rowCheck(temp, rowIndex, vect) && columnCheck(temp, columnIndex, vect) && boxCheck(temp, rowIndex, columnIndex, vect) )
    return true;
  return false;
}

// returns a value in this square that fits the sudoku rule
int firstInstance(int temp, int rowIndex, int columnIndex, vector<vector<int>> & vect) {
  while (temp <= 9) {
  if (  isSafeNumber(temp, rowIndex, columnIndex, vect) ) 
    break;
  else  
    temp++;
  }
  if (temp > 9) {
    return 0;
  }
  else 
  return temp;
}

// prints out a sudoku ( 9 x 9 2D vector )
void printOutSudoku(vector<vector<int>> & vect) {
  cout << endl;
  for (int a = 0; a < 9; a++) {
    for (int b = 0; b < 9; b++) {
      if (b == 2 || b == 5)
      cout << vect.at(a).at(b) << "  ";
      else 
      cout << vect.at(a).at(b) << " ";
    }
    if (a == 2 || a == 5)
    cout << endl << endl;
    else 
    cout << endl;
  }
}

// function to gather the 0 indexes in the 2D vector and gather it in a new vector
void vectorOfBlanks(vector<int> & newVect, vector<vector<int>> & vect) {
  for (int a = 0; a < 9; a++) {
    for (int b = 0; b < 9; b++) {
      if (vect.at(a).at(b) == 0) {
        newVect.push_back(a * 10 + b);
      }
    }
  }
}

// main function of the program
void solve(vector<vector<int>> & sudoku, vector<int> blankSpaces) {
  int r, c, cS;
  int tempIndexValue = 1;

  for (int ix = 0; ix < blankSpaces.size(); ix++) {
    r = blankSpaces.at(ix) / 10;
    c = blankSpaces.at(ix) % 10;
    if (tempIndexValue > 1)
      sudoku.at(r).at(c) = firstInstance(tempIndexValue+1, r, c, sudoku);
    else 
      sudoku.at(r).at(c) = firstInstance(1, r, c, sudoku);
    cS = sudoku.at(r).at(c);
    tempIndexValue = 1;
      if (sudoku.at(r).at(c) == 0) {
          ix -= 2;
          r = blankSpaces.at(ix+1) / 10;
          c = blankSpaces.at(ix+1) % 10;
          tempIndexValue = sudoku.at(r).at(c);
        }
    }  
}

#endif 
