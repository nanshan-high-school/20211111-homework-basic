#include <iostream>
using namespace std;

int main() {
    int ans = 35, num, n1 = 1, n2 = 100;
    while(true){
        cout << "請輸入一個 " << n1 << "~ " << n2 <<"的數:";
        cin >> num;
        if (num > 100 || num < 1){
          cout << "請重新輸入\n";
        }else if (ans < num){
            n2 = num;
        }else if (ans > num){
            n1 = num;
        }else{
            break;
        }  
    }
    cout << "你猜到了";
}