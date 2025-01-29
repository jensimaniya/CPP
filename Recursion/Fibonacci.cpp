#include <iostream>
using namespace std;
int fibonacci(int n)

{
  if (n == 0 || n == 1) {
    return n;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
  //   cout << fibonacci(1) << endl;
  int n;
  cout << " enter any number :";
  cin >> n;

  for (int i = 0; i <= n; i++) {
    cout << fibonacci(i) << " ";
  }
  return 0;
}