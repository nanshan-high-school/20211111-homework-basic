#include <iostream>
using namespace std;
int main() {
  int ans=75;
  cout << "範圍是1到100" <<"\n" ;
  int min=1;
  int big=100;
  while (1) {
    int a;
    
    cin >> a;
    if (a>100 or a<1){
      
    }
    if (a>ans){
      if (a<big){
        big=a;
      }
      
      cout << "範圍是" << min << "到"<< big <<"\n";
    }else if (a<ans){
      if (a>min){
        min=a;
      }
      cout << "範圍是" << min << "到"<< big <<"\n";
    }else{
      cout << "你猜到了";
    }
  }

} 