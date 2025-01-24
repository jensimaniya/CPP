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
  for (int i = 0; i < size; ++i) {
    cout << "Element " << i  << ": ";
    cin >> array[i];
  }

  // Display the original array
  cout << "\nOriginal Array: ";
  for (int i = 0; i < size; ++i) {
    cout << array[i] << " ";
  }
  cout << endl;

  // Update an element
  int index, newValue;
  cout << "\nEnter the index of the element to update (0 to " << size - 1
       << "): ";
  cin >> index;

  // Check for valid index
  if (index >= 0 && index < size) {
    cout << "Enter the new value: ";
    cin >> newValue;

    array[index] = newValue; // Update the element at the given index

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
