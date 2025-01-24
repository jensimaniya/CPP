#include <iostream>
using namespace std;

int main() {
  int size;

  // Input the size of the array
  cout << "Enter the size of the array: ";
  cin >> size;

  // Declare the array
  int array[size];

  // Input elements of the array
  cout << "Enter the elements of the array:" << endl;
  for (int i = 0; i < size; i++) {
    cout << "Element " << i + 1 << ": ";
    cin >> array[i];
  }

  // Display the original array
  cout << "\nOriginal Array: ";
  for (int i = 0; i < size; ++i) {
    cout << array[i] << " ";
  }
  cout << endl;

  // Input the index of the element to delete
  int indexToDelete;
  cout << "\nEnter the index of the element to delete (0 to " << size - 1
       << "): ";
  cin >> indexToDelete;

  // Check if the index is valid
  if (indexToDelete >= 0 && indexToDelete < size) {
    // Shift elements to the left
    for (int i = indexToDelete; i < size - 1; ++i) {
      array[i] = array[i + 1];
    }

    // Decrease the logical size of the array
    size--;

    // Display the updated array
    cout << "\nUpdated Array: ";
    for (int i = 0; i < size; ++i) {
      cout << array[i] << " ";
    }
    cout << endl;
  } else {
    cout << "Invalid index!" << endl;
  }

  return 0;
}
