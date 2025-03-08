// #include<iostream>
// using namespace std;
// int Linier(int arr[],int t, int n){
//     for(int i=0; i<n; i++){
//         if(arr[i]==t){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[5]={10,20,30,40,50};
//     int t;
//     cout<<"enter your Target Value:";
//     cin>>t;

//     int result=Linier(arr,t,5);
//     cout<<result<<endl;

//     return 0;
// }




#include <iostream>
using namespace std;
int bninary(int arr[], int t,int n) {
  int start = 0;
  int end =n-1;
  
  while (start <= end) {
int mid = (start + end) / 2;
    if (arr[mid] == t) {
      return mid;
    } else if (arr[mid] > t) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return -1;
}

int main() {
   
  int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int t;
cout<<"enter yout target :";
cin>>t;
  int result = bninary(array,t,10);
  cout << result << endl;

  return 0;
}

