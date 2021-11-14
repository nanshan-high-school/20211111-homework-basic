#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using  namespace std;

int main(){
  srand( time(NULL) );   /* 產生亂數 */

  int min = 2;
  int max = 99;
  int n = rand() % (max - min + 1) + min;
  //printf("n = %d\n", n);

  int num, a=1, b=100;   /* 開始猜數字 */
  do {
    cout <<"請輸入"<< a << "到"<< b<< "\n";
    cin >> num;

    if(num < b and num > n){
      b = num ;
    }else  if (num > a and num <= n){
      a = num ;
    }else{
      cout << "不再範圍內清重新輸入" << "\n";
    }
  }while(num != n);
  cout << "你猜到了";

}