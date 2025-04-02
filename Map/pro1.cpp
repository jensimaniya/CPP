#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
  unordered_map<char, int> map;
//   map['a'] = 1;
//   cout << map['a'] << endl;

  map['a']=10;
  map['b']=20;
  map['c']=30;
  map['d']=40;

  cout<<map.size()<<endl;
  cout<<map.at('a')<<endl;

  if(map.find('a')!=map.end()){
    cout<<map['a']<<endl;
  }
  else{
    cout<<"key not found"<<endl;
  }
  for(auto i:map){
    cout<<i.first<<"->"<<i.second<<endl;
  }

      return 0;
}