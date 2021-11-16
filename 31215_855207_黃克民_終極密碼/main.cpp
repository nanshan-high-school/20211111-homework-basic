#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
  int mode;
  srand( time(NULL) );
  cout << "請選擇遊戲模式" << "\n" << "    I.單人遊玩(1)" << "\n" << "   II.雙人競技(2)" << "\n" <<"  III.電腦模式(3)" << "\n" << "選擇:";
  cin >> mode;
  while (mode != 1 && mode != 2 && mode != 3) {
    cout << "輸入錯誤,請重新輸入:";
    cin >> mode;
    if (mode == 1 || mode == 2 || mode == 3) {
      break;
    }
  }
  int starts = 1 , finals = 100 , ans = rand() % (finals - starts + 1) + starts , countDown = 0;
  if (mode == 1) {
    int inputs;
    do {
      cout << "範圍:" << starts << "~" << finals << "\n" << "輸入:";
      cin >> inputs;
      if (inputs > finals || inputs < starts) {
        cout << "請重新輸入" << "\n";
        continue;
      } else {
        if (inputs > ans){
          finals = inputs;
        } else {
          starts = inputs;
        }
      }
    } while (inputs != ans);
    cout << "恭喜答對";
  } else if (mode == 2) {
    string pone , ptwo;
    cout << "請輸入一號玩家名稱:";
    cin >> pone;
    cout << "請輸入二號玩家名稱:";
    cin >> ptwo;
    int inputs;
    do {
      countDown += 1 ;
      cout << "範圍:" << starts << "~" << finals << "\n" << "輸入:";
      cin >> inputs;
      if (inputs > finals || inputs < starts) {
        cout << "請重新輸入" << "\n";
        countDown -= 1 ;
        continue;
      } else {
        if (inputs > ans){
          finals = inputs;
        } else {
          starts = inputs;
        }
      }
    } while (inputs != ans);
    if (countDown % 2 == 0) {
      cout << "恭喜" << ptwo << "答對" ;
    } else {
      cout << "恭喜" << pone << "答對" ;
    }
  } else if (mode == 3) {
    int countDown = 0;
    int inputs , computerans;
    do {
      countDown += 1 ;
      if (countDown % 2 == 0) {
        computerans = rand() % (finals - starts + 1) + starts;
        cout <<"範圍:" << starts << "~" << finals << "\n" << "輸出:" << computerans << "\n";
        if (computerans > ans){
          finals = computerans;
        } else {            
          starts = computerans;
        }
      } else {
        cout << "範圍:" << starts << "~" << finals << "\n" << "輸入:";
        cin >> inputs;
        if (inputs > finals || inputs < starts) {
          cout << "請重新輸入" << "\n";
          countDown -= 1 ;
        } else {
          if (inputs > ans){
            finals = inputs;
          } else {            
            starts = inputs;
          }
        }
      }
    } while (inputs != ans && computerans != ans) ;
    if (countDown % 2 == 0) {
      cout << "恭喜玩家答對" ;
    } else {
      cout << "電腦答對" ;
    }
  }
}