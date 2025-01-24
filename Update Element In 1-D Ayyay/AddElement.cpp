#include <iostream>
using namespace std;

int main() {
  int size;

  // Input the size of the array
  cout << "Enter the size of the array: ";
  cin >> size;

  // Declare the array
  int array[size + 1]; // Array size increased by 1 for the new element

  // Input elements of the array
  cout << "Enter the elements of the array:" << endl;
  for (int i = 0; i < size; ++i) {
    cout << "Element " << i + 1 << ": ";
    cin >> array[i]; // Populate the array with user input
  }

  // Display the original array
  cout << "\nOriginal Array: ";
  for (int i = 0; i < size; ++i) {
    cout << array[i] << " ";
  }
  cout << endl;

  // New element to add at the end
  int newElement;
  cout << "\nEnter the new element to add at the end: ";
  cin >> newElement;

  // Add the new element to the end of the array
  array[size] = newElement; // Insert the element at the new index (size)

  // Display the updated array
  cout << "\nUpdated Array with new element: ";
  for (int i = 0; i < size + 1; ++i) {
    cout << array[i] << " ";
  }
  cout << endl;

  return 0;
}
