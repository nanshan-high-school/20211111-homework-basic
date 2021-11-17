// https://replit.com/@andy8787main/guessing-Cai-Mi-Ma#main.cpp
// https://github.com/nanshan-high-school/20211111-homework-basic
#include <iostream>
using namespace std;

void One() { //使用者猜測
    cout << "尚未開發1";
}

void Two() { //兩個使用者輪流猜測，看是誰猜到就是勝利者
    cout << "尚未開發2";
}

void Three() { //電腦猜測
    cout << "尚未開發3";
}

void Four() { //電腦跟使用者互猜
    cout << "尚未開發4";
}

int main() {
    int WhatMod;
    cout << "請輸入編號來選擇模式\n1.使用者猜測\n2.兩個使用者輪流猜測，看是誰猜到就是勝利者\n3.電腦猜測\n4.電腦跟使用者互猜\n編號為: ";
    cin >> WhatMod;
    switch(WhatMod) { 
        case 1:
            One();
            break; 
        case 2: 
            Two();
            break; 
        case 3: 
            Three();
            break; 
        case 4: 
            Four();
            break; 
        default: 
            cout << "輸入編號錯誤" << endl; 
            break;
    } 
} 

/*
四種模式
1.使用者猜測
2.兩個使用者輪流猜測，看是誰猜到就是勝利者
3.電腦猜測
4.電腦跟使用者互猜
*/
