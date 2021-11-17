#include <iostream>
using namespace std;

int main() {
    int ans = 31, num, a_num = 1, b_num = 100;
    while(1){
        cout << "請輸入一個" << a_num << "~" << b_num << "的數:";
        cin >> num;
        if (num >= b_num or num <= a_num){
            cout << "請重新輸入\n"; 
        }else if (ans < num){
            b_num = num;
        }else if (ans > num){
            a_num = num;
        }else{
            break;
        }  
    }
    cout << "你答對了";
}