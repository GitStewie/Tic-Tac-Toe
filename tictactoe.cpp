#include <iostream> // Header that allows cout and cin

using namespace std; // Defaults cout and cin to std::cout and std::cin

const int ROW_NUMBER = 3; // Controls rows
const int COLUMN_NUMBER = 3; // Controls columns

void gridInsertion(char grid[ROW_NUMBER][COLUMN_NUMBER], string positionReference, char currentPlayer) {
  int rowPosition = (int)(positionReference[1]) - 48;
  int columnPosition = (int)(positionReference[3]) - 48;
  grid[rowPosition][columnPosition] = currentPlayer;
}

void intiliazeGrid(char grid[ROW_NUMBER][COLUMN_NUMBER]) {
  for (int i = 2; i >= 0; i--) {
    for (int j = 2; j >= 0; j--) {
       grid[i][j] = '.';
    }
  }
}

void displayGrid(char grid[ROW_NUMBER][COLUMN_NUMBER]) {
  for (int i = 2; i >= 0; i--) {
    for (int j = 2; j >= 0; j--) {
      cout << grid[j][i];
    }
    cout << endl;
  }
}

void askForInput(string &positionReference) {
  while (true) {
    cout << "Please input the desired position"
         <<  "to play using the following input where the number after"
         << "'r' refers to row and number after 'c' refers to column: r#c#" << endl;
    cin >> positionReference;
    if (positionReference.at(0) != 'r' || positionReference.at(2) != 'c' || (positionReference.at(1) != '1' && positionReference.at(1) != '2' && positionReference.at(1) != '3') || (positionReference.at(3) != '1' && positionReference.at(3) != '2' && positionReference.at(3) != '3')) {
      cout << "Invalid input: please try again" << endl;
      continue;
    }
    break;
  }
}

int main() { // Main function that is automatically called at execution
  char grid[ROW_NUMBER][COLUMN_NUMBER]; // The grid that is played on
  intiliazeGrid(grid);
  string positionReference; // Reference to position
  char currentPlayer = 'X';
  do {
    askForInput(positionReference); // Ask for input
    gridInsertion(grid, positionReference, currentPlayer);
    displayGrid(grid);
    if (currentPlayer == 'X') {
      currentPlayer == 'O';
    } else {
      currentPlayer == 'X';
    }
  } while(true);

}
