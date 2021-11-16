#include <iostream>
using namespace std;
int main() {
  cout << "1~100\n";
  int x;
  cin >> x;
  int a = 100;
  int b = 1;
  int ans = 33;
  while( x != ans  ){
    if ( x > ans ){
       a = x;
       cout << b << "~" << a << "\n";
    } else {
       b = x;
       cout << b << "~" << a << "\n";
    }
    cin >> x;
  }
cout << "你猜到了!";   
}
