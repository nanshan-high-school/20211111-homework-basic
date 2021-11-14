#include <iostream>
using namespace std;

int main() {
  srand(time(NULL));
  int ans, num = (rand() % 100) + 1, min = 1, max = 100;
  cout << "從 " << min << " ~ " << max << " 中猜一個數字: ";

  do {  
    cin >> ans;

    if (ans <= min || ans >= max) {
      cout << "請注意範圍!!" << "\n";
      cout << "從「 " << min << " ~ " << max << " 」中猜一個數字: ";
      continue;
    }

    if (ans < num) {
    min = ans;
    } else if (ans > num) {
    max = ans;
    } else {
    break;
    }

    cout << "可惜答錯~" << "\n";
    cout << "從 " << min << " ~ " << max << " 中猜一個數字: ";
  } while (ans != num);

  cout << "恭喜答對!";
} 
