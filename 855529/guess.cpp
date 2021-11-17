#include <iostream>
using namespace std;
int main() {
  int a=1;
  int b=100;
  int c;
  cout <<"輸入一個數字（1到100）：";
  cin >> c;
  while(c!=25){
    if(c<25){
      a=c;
      cout <<"輸入一個數字（";
      cout << a;
      cout <<"到";
      cout <<b;
      cout <<")：";
      cin >> c;
    }else{
      b=c;
      cout <<"輸入一個數字（";
      cout <<a;
      cout <<"到";
      cout <<b;
      cout <<"):";
      cin >> c;
      }
    }
  cout <<"猜對了" ;
}
      
      
      