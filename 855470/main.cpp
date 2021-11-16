#include <iostream>
using namespace std;

int main() {
int ans=1;
int num=1;
int min=1;
int max; 
cout << "設定數字範圍(1到數字):\n" ;
cin >> max ;
num=(rand() % max)+1;
  do{
    cout << "猜一個從" << min << "到" << max <<"的數字:\n" ;
    cin >> ans ;
    if (ans>=min && ans<=num){
      min=ans;
    }else if(ans<=max && ans>=num){
      max=ans;
    } 
  }while (ans !=num);
  cout << "你贏了!" ;

} 