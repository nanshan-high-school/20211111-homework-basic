#include <iostream>
using namespace std;

int main() {
    int ans = 87, num, s_num = 1, b_num = 100;
    while(num != ans){
        cout << "請輸入一個" << s_num << "~" << b_num << "的數:";
        cin >> num;
        if (num >= b_num or num <= s_num){
            cout << "請重新輸入\n"; 
        }else if (ans < num){
            b_num = num;
        }else if (ans > num){
            s_num = num;
        } 
      } 
      cout << "你猜到了";
    }
