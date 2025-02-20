#include <iostream>
using namespace std;

class ADD {
public:
  int a;
  int b;

  ADD(int a, int b) {
    this->a = a;
    this->b = b;
  }

  int sum() { return a + b; }
};

class ADDSUB {
public:
  int c;
  int d;

  ADDSUB(int c, int d) {
    this->c = c;
    this->d = d;
  }

  int sub() { return c - d; }
};

class ADDMUL : public ADDSUB, public ADD {
public:
  ADDMUL(int a, int b, int c, int d) : ADD(a, b), ADDSUB(c, d) {
    // this->a = a;
    // this->b = b;
    // this->c = c;
    // this->d = d;
  }

  int mul() { return sum() * sub(); }
};

int main() {

  ADDMUL multiple(11, 12, 20, 10);

  cout << "Sum : " << multiple.sum() << endl;
  cout << "Sub : " << multiple.sub() << endl;
  cout << "Mul : " << multiple.mul() << endl;

  return 0;
}