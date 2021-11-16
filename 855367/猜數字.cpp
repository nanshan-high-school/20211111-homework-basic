#include <iostream>
using namespace std;
int main() {
  int i;
  int up;
  int down;
  cin >> i;
  cin >> up;
  cin >> down;
  int num;
  do {
    cin >> num;
    if (i > num) {
      down = num;
      cout << num << "~" << up;
    } else if (i < num) {
      up = num;
      cout << down << "~" << num;
    } else if (i == num ) { 
      cout << "你猜對了";
      break;
    }
      
  } while (num != i);
} 