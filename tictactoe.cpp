#include <iostream> // Header that allows cout and cin

using namespace std; // Defaults cout and cin to std::cout and std::cin

const int GRID_SIZE = 9; // Constant integer variable corresponding to grid size

void askForInput(string &positionReference) {
  while (true) {
    cout << "Please input the desired position"
         <<  "to play using the following input where the number after"
         << "'r' refers to row and number after 'c' refers to column: r#c#" << endl;
    cin >> positionReference;
    if (positionReference.at(0) != 'r' || positionReference.at(2) != 'c' || (positionReference.at(1) != 1 && positionReference.at(1) != '2' && positionReference.at(1) != '3') || (positionReference.at(3) != '1' && positionReference.at(3) != '2' && positionReference.at(3) != '3')) {
      cout << "Invalid input: please try again" << endl;
      continue;
    }
    break;
  }
}

int main() { // Main function that is automatically called at execution
  int grid[GRID_SIZE]; // The grid that is played on
  string positionReference; // Reference to position
  askForInput(positionReference);
}
