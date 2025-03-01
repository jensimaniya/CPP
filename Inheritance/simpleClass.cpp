#include <iostream>
using namespace std;

class Add {
public:
  int a;
  int b;

  Add(int a, int b) {
    this->a = a;
    this->b = b;
  }
  int sum() { return a + b; }
};

int main() {
  Add add(1, 2);

  cout << add.sum() << endl;
  

  return 0;
}