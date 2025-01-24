#include <iostream>
#include <string>

using namespace std;

int main() {

  string str = "jensi";
  int n = str.length();
  //   cout << str << endl;

  for (int i = 0; i < n; i++) {
    cout << str[i] << " ";
  }

  return 0;
}
