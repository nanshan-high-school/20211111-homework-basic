#include <iostream>
using namespace std;

int main() {
int ans , num , min=1 , max ;
cout << "選取數字最大值(1~?):" ;
cin >> max ;
num=(rand() % max) +1 ;
  do{
    cout << "猜一個" << min << "~" << max <<"的數字:" ;
    cin >> ans ;
    if (ans>=min&&ans<=num){
      min=ans;
    }else if(ans<=max&&ans>=num){
      max=ans;
    } 
  }while (ans !=num);
  cout << "你猜對了!" ;

} 