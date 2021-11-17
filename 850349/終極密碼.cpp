#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
int num;     // 設定輸入值
int ans = 80;     // 設定密碼
int low=1,high=100;     // 設定密碼範圍：1到100
do{
cout << "請輸入 " << low << " ～ " << high << " 的數 : ";
cin >> num;
if (num>high || num<low){     // 設定輸入值必須在最高值與最低值之間
cout << "猜錯瞜!" << endl;
continue;
}

 if (num < ans) {
    low = num;
    } else if (num > ans) {
    high = num;
    } else {
    break;
    }

    cout << "猜錯瞜~" << "\n";
    cout << "從 " << low << " ~ " << high << " 中猜一個數字: ";
}while (num != ans);
  cout << "恭喜答對!";
}

