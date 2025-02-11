#include <iostream>
using namespace std;
class student {
public:
  int number;
  int grid;
  string name;
  string course;
};

int main() {
  student s;
  s.number = 101;
  s.grid = 8718;
  s.name = "jensi";
  s.course = "Full stack";

  cout << s.number << " " << s.grid << " " << s.name << " " << s.course << endl;

  return 0;
}