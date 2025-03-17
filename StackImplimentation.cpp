#include <iostream>
using namespace std;

class stack {
public:
  int *arr;
  int index;
  int size;

  stack(int n) {
    this->size = n;
    arr = new int[n];
    index = -1;
  }

  void stackpush(int value) {
    if (index < size - 1) {
      arr[++index] = value;
      cout << "Pushed value: " << value << endl;
    } else {
      cout << "Stack is full" << endl;
    }
  }

  void pop() {
    if (index != -1) {
      cout << "Popped value: " << arr[index] << endl; 
      --index; 
    } else {
      cout << "Stack is empty" << endl;
    }
  }

  void print() {
    for (int i = 0; i < index + 1; i++) {
      cout << arr[i] << endl;
    }
  }

  int sizeL() { return index + 1; }
};

int main() {
  stack S(6);

  S.stackpush(10);
  S.stackpush(20);
  S.stackpush(30);
  S.stackpush(40);

  S.pop(); // Pops value 40
  S.pop(); // Pops value 30

  S.print();

 cout<< S.sizeL();

  return 0;
}
