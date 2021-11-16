#include <iostream>
using namespace std;
int main() {
  int up = 100, low = 1, ans = 76, a;
  
  cout << "1-100\n";
  do {
    cin >> a;
    if (a==ans){
      cout << "Correct";
    }
    else if (low < a && a < up){
      if (low < a && a < ans){
        low = a;
      } else{
        up = a;
      } cout << low << "-" << up << "\n";
    } else{
      cout << "again\n";
    }
  } while (a != ans);
} 
