#include <iostream>
#include <string>
using namespace std;
int main() {
  string str = "fullsteck";
  int n = str.length();
  int count = 0;
  //   for(char c:str)
  //   {
  //     if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
  //     {
  //         count++;
  //     }
  //   }
  //   cout<<count<<endl;

  for (int i = 0; i < n; i++) {
    if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') {
      count++;
    }
  }
  cout << count << endl;

  return 0;
}