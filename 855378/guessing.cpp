#include <iostream>
using namespace std;
int main() {
  int up = 100, down = 1;
  int ans = 87;
  int gs;
  cin >> gs;
  while (gs != ans) {
    if (gs > ans) {
      up = gs;
      cout << down << "~" << up << "\n";
    } else {
      down = gs;
      cout << down << "~" << up << "\n";
    }
    cin >> gs;
  }
cout << "你猜到了";
}