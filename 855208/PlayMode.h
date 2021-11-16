#pragma once
#include <iostream>
#include "ProcessNumber.h"
using namespace std;

void singlePlayer();
void multiPlayer();
void bot();
void gameEnd(string);

void singlePlayer()
{
  srand(time(NULL));    // update random seed
  int target =  rand() % 100 + 1;
  int ceiling = 100, floor = 1;
  do {
    cout << "範圍是" << floor << "~" << ceiling << endl;
    cout << "猜數字: ";
    int guess;
    cin>> guess;

    if(!isOutofRange(ceiling, floor, guess))
    {
      if(guess != target)
      {
        changeFloorAndCeiling(&floor, &ceiling, target, guess);
      }
      else
      {
        cout << "猜中了" << endl;
        break;
      }  
    }
    else
    {
      cout << "[ERROR] 未在範圍內，請重新輸入" << endl;
    }
  } while(true);
}

void multiPlayer()
{
  string name1;
  string name2;
  cout << "請輸入玩家1名稱: ";
  cin >> name1;

  cout << "請輸入玩家2名稱: ";
  cin >> name2;

  srand(time(NULL));    // update random seed
  int target =  rand() % 100 + 1;
  int ceiling = 100, floor = 1;
  do {
    do {
      cout << "範圍是" << floor << "~" << ceiling << endl;
      cout << "[" << name1 << "]猜數字: ";
      int player1Guess;
      cin >> player1Guess;

      if(!isOutofRange(ceiling, floor, player1Guess))
      {
        if(player1Guess != target)
        {
          changeFloorAndCeiling(&floor, &ceiling, target, player1Guess);
          break;
        }
        else
        {
          gameEnd(name1);
          break;
        }  
      }
      else
      {
        cout << "[ERROR] 未在範圍內，請重新輸入" << endl;
      }
    } while(true);
    
    do {
      cout << "範圍是" << floor << "~" << ceiling << endl;
      cout << "[" << name2 << "]猜數字: ";
      int player2Guess;
      cin >> player2Guess;

      if(!isOutofRange(ceiling, floor, player2Guess))
      {
        if(player2Guess != target)
        {
          changeFloorAndCeiling(&floor, &ceiling, target, player2Guess);
          break;
        }
        else
        {
          gameEnd(name2);
          break;
        }  
      }
      else
      {
        cout << "[ERROR] 未在範圍內，請重新輸入" << endl;
      }
    } while(true);
  } while(true);
}

void bot()
{
  srand(time(NULL));    // update random seed
  int target =  rand() % 100 + 1;
  int ceiling = 100, floor = 1;
  do {
    do {
      cout << "範圍是" << floor << "~" << ceiling << endl;
      cout << "[你]猜數字: ";
      int guess;
      cin>> guess;

      if(!isOutofRange(ceiling, floor, guess))
      {
        if(guess != target)
        {
          changeFloorAndCeiling(&floor, &ceiling, target, guess);
          break;
        }
        else
        {
          gameEnd("你");
          break;
        }  
      }
      else
      {
        cout << "[ERROR] 未在範圍內，請重新輸入" << endl;
      }
    } while(true);
    
    int botGuess = rand() % (ceiling - floor + 1) + floor;
    cout << "[電腦]猜數字: " << botGuess << endl;

    if(botGuess != target)
    {
      changeFloorAndCeiling(&floor, &ceiling, target, botGuess);
    }
    else
    {
      gameEnd("電腦");
      break;
    }
  } while(true);
}

void gameEnd(string name)
{
  cout << endl << "[遊戲結束]" << name << "猜中了" << endl;    // 這東西真難受
  exit(0);
}
