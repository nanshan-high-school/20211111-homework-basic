#include <iostream>
using namespace std;

int main() {
    int min = 1, ans, max = 100;
    do {
        cout << "請輸入" << min << "~" << max << "的數字" << "\n" ;
        cin >> ans;
        if (ans > 56) {
            max = ans;
        } else if (ans < 56){
            min = ans;
        }
    } while (ans != 56);
    cout << "你猜到了!";
}
