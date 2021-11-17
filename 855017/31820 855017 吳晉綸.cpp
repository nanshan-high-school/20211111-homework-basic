#include <iostream>
#include <random>
using namespace std;

int main() {

  int min = 1, max = 100, ans = 87, num;

  do {

    cout << min  << "~" << max << "?\t";
    cin >> num;
    cout << "\n";

    if(num > min && num < max) {

      if(num > ans) {

        max = num;
      
      } else { 

        min = num;

      }

    } else {

      cout << "超出範圍!!\n\n";

    }

  } while(num != ans);

cout << "你猜到了!!";

}