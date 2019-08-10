#ifndef functions_h
#define functions_h
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// function to check if number already present in row
bool rowCheck(int number, int row, vector<vector<int>> vect) {
  for (int i = 0; i < 9; i++) {
    if (number == vect.at(row).at(i)) 
      return false;
  }
  return true;
}

// function to check if number already present in column
bool columnCheck(int number, int column, vector<vector<int>> vect) {
  for (int i = 0; i < 9; i++) {
    if (number == vect.at(i).at(column))
      return false;
  }
  return true;
}

// function to check if number already present in its corresponding box
bool boxCheck(int number, int rowIndex, int columnIndex, vector<vector<int>> vect) {
  for (int a = rowIndex; a < rowIndex + 3; a++) {
    for (int b = columnIndex; b < columnIndex + 3; b++) {
      if (number == vect.at(a).at(b)) 
        return false;
    }
  }
  return true;
}

// returns a value in this square that fits the criteria so far
int firstInstance(int temp, int rowIndex, int columnIndex, vector<vector<int>> vect) {
  while (temp <= 9) {
  if (  rowCheck(temp, rowIndex, vect) && columnCheck(temp, columnIndex, vect) && boxCheck(temp, rowIndex, columnIndex, vect) ) 
    break;
  else 
    temp++;
  }
  return temp;
}

// checks if present square is a blank one needed to be filled in and not a pre-determined square
bool isEmptySquare(int index, vector<int> v) {
  if ( find(v.begin(), v.end(), index) != v.end() ) 
    return true;
  else 
    return false;
}

void printOutSudoku(vector<vector<int>> vect) {
  for (int a = 0; a < 9; a++) {
    for (int b = 0; b < 9; b++) {
      cout << vect.at(a).at(b) << ' ';
    }
    cout << endl;

  }

}

// function to gather zeros in the double vector and gather it in a vector of indexes
void vectorOfBlanks(vector<int> & newVect, vector<vector<int>> vect) {
  for (int a = 0; a < 9; a++) {
    for (int b = 0; b < 9; b++) {
      if (vect.at(a).at(b) == 0) {
        newVect.push_back(a * 10 + b);
      }
    }
  }
}

bool solve(vector<int> blankSpaces, vector<vector<int>> vect) {




  return false;
  
}

#endif 