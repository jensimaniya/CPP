#include<iostream>
using namespace std;

int main()
{
   int n, i, j, space;

   cout << "Enter number of rows: ";
   cin >> n;

   for(i = 1; i <= n; i++)
   {
      //for loop to put space in pyramid
      for (space = i; space < n; space++)
         cout << " ";

      //for loop to print star
      for(j = 1; j <= (2 * n - 1); j++)
      {
         if(i == n || j == 1 || j == 2*i - 1)
            cout << "*";
         else
            cout << " ";
      }
      cout << "\n";
   }
   return 0;
}