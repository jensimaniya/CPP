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
  int sum() { return this->a + this->b; }
};

class AddSub : public Add {
public:
  int c;
  int d;

  //   AddSub( int c, int d) : Add(a, b) {
  AddSub(int a, int b, int c, int d) : Add(a, b) {
    this->c = c;
    this->d = d;
  }

  int sub() { return c - d; }
};

int main() {
  //   Add add(1, 2);
  //   AddSub sub(20, 10);

  AddSub add(1, 2, 20, 30);

  cout << add.sum() << endl;

  cout << add.sub() << endl;

  return 0;
}