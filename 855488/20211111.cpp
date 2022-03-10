#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() 
{
 
 int input;
 int ans;
 int low=1 , high=100;                    
 srand((unsigned)time(NULL));   
 ans = rand() % high + low;     
    cout << "請輸入 1~100 的數 : " ;

 while(cin >> input){

 if(input < ans){
 cout << "再大，" ;
 low = input;
 cout << "請輸入" << low << "~" << high << "的數 : ";}

 if(input > ans) {
 cout << "在小，" ;
 high = input;
 cout << "請輸入" << low << "~" << high << "的數 : ";}

 if(input == ans) {
 cout << "答對了";
 break;}
}
 return 0;
}