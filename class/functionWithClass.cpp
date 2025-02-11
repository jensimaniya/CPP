#include <iostream>
using namespace std;
class student { 
public:
  int number;
  int grid;
  string name;
  string course;

  student(int number, int grid, string name, string course) { 
    this->number = number;
    this->grid = grid;
    this->name = name;
    this->course = course;
  }

  void printDetails() {
    cout << "student name :" << this->name<<endl;
    cout << "student course :" << this->course;
    cout<<endl;
  }
};

int main() {
  student s(101, 8001, "jensi", "full stack");
  student s2(102, 8002, "Nidhi", "backend");

  s.printDetails();
  s2.printDetails();

      return 0;
}