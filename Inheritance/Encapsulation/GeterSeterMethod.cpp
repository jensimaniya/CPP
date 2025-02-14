#include <iostream>
using namespace std;
class Test {
private:
  int a, b;

public:
  Test(int a, int b) {
    this->a = a;
    this->b = b;
  }
  int getA() { return this->a; }
  void setA(int a) { this->a = a; }
  void setB(int b) { this->b = b; }
  int getB() { return this->b; }
};

int main() {
  Test t(10, 20);
//   t.setA(101);

  cout << t.getA() << " " << t.getB() << endl;

  return 0;
}