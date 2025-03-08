#include <iostream>
#include <vector>
using namespace std;
int main() {

  //   vector<int> arr = {1, 2, 3, 4, 5};
  //   cout << arr[2] << endl;

  //   for (int i = 0; i < arr.size(); i++) {
  //     cout << arr[i] << endl;
  //   }

  vector<vector<int>> matrix = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9},

      //   0   1   2
      //0 00, 01 ,02
      //1 10, 11, 12
      //2 20, 21, 22

  };

  //   cout<<matrix[0][1]<<endl;
 
  int n=matrix.size();
  int m=matrix[0].size();

  // cout<<n<<endl;
  // cout<<m;

  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < m; j++) {
  //     cout << matrix[i][j] << endl;
  //   }
  // }

  // for(int i=0; i<n;i++){
  //   for(int j=0; j<m; j++){
  //     if( i+j==n-1 || i==j ){
  //       cout<<matrix[i][j]<<endl;
  //     }
      
  //   }
  // }

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(i==0 || j==0 || i==n-1 || j==m-1){
        cout<<matrix[i][j]<<" ";
      }
      else{
        cout<<"-"<<" ";
      }
    }
    cout<<endl;
  }

  return 0;
}