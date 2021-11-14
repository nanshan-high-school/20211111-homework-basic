#include <iostream>
#include <stdlib.h>
#include "PlayMode.h"
using namespace std;

#define clear() system("clear");

int main()
{
  int choice;
  printf(" ___  _              _         ___          _      \n| __|(_) _ _   __ _ | |       / __| ___  __| | ___ \n| _| | || ' \\ / _` || |      | (__ / _ \\/ _` |/ -_)\n|_|  |_||_||_|\\__/_||_|       \\___|\\___/\\__/_|\\___|\n");

playModeMenu:   // 我好懶
  printf("遊玩模式:\n    (1)單人\n    (2)雙人\n    (3)機器人\n請輸入選項: ");
  cin >> choice;
  clear();
  if(choice == 1)
  {
    singlePlayer();
  }
  else if(choice == 2)
  {
    multiPlayer();
  }
  else if(choice == 3)
  {
    bot();
  }
  else
  {
    cout << "[ERROR] 未在選單內，請重新輸入" << endl;
    goto playModeMenu;
  }
} 
