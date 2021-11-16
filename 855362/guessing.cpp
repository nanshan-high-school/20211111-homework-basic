#include <iostream>
using namespace std;
int main() {
  cout << "1~100\n";
  int password = rand()%100+1;
  int a ;
  int b = 1;
  int c =100;
  if(a != password){
    do{
      cin >> a;
      if (a<b){
        cout <<"wrong\n";
        cout << b<<"~"<< c<<"\n";
      }else if (a>c){
        cout <<"wrong\n";
        cout << b<<"~"<< c<<"\n";
      }else if(a>password){
        c = a ;
        cout << b<<"~"<< c<<"\n";
      }else if(a<password){
        b=a;
        cout << b<<"~"<< c<<"\n";
      }else{
        cout << "success";
      }
    }while(a != password);
  }
} 