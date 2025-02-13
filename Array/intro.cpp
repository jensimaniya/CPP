#include <iostream>
using namespace std;
int main() {
  string name[3] = {"jensi", "Nidhi", "Yashvi"};
  float marks[3] = {10, 20, 30};
  int age[3] = {24, 22, 19};

  for (int i = 0; i < 3; i++) {
    cout << "name is :" <<name[i] << endl
         << "marks is :" << marks[i] << endl
         << "age is :" << age[i] << endl;
  }
  return 0;
}