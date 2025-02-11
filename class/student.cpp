#include <iostream>
using namespace std;
class student { // class
public:
  int number;
  int grid;
  string name;
  string course;

  student(int number, int grid, string name, string course) { // constructer
    this->number = number;
    this->grid = grid;
    this->name = name;
    this->course = course;
  }
};

int main() {
  student s(101, 8001, "jensi", "full stack"); // object
  student s2(102, 8002, "Nidhi", "backend");

  cout << s.number <<" "<< s.grid <<" "<< s.name << " " << s.course << endl;
  cout << s2.number << " " << s2.grid << " " << s2.name << " " << s2.course << endl;

  return 0;
}