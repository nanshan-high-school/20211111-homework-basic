#include <iostream>
using namespace std;
int main() {
  
  cout << " 1 ~ 100 \n" ;
  
  srand(time(NULL));
  int password = rand() % 100+1 ;
  int answer ,total = 1 ,max = 100 ,min = 1 ;
  
  if(answer != password){
  do {
      cin >> answer ;

      if (answer < min ){
        cout << total << " 次 ";
        cout << " wrong " ;
        cout << min << " ~ " << max << '\n' ;
        total ++ ;

      }else if (answer > max ){
        cout << total << " 次 " << '\n' ;
        cout << " wrong " << '\n' ;
        cout << min << " ~ " << max << '\n' ;
        total ++ ;

      }else if (answer > password){
        cout << total << " 次 " << '\n' ;
        cout << " wrong " << '\n' ;
        max = answer ;
        total ++ ;
        cout <<  min << " ~ " << max;

      }else if (answer < password){
       cout << total << " 次 " << '\n' ;
       cout << " wrong " << '\n' ;
       min = answer ;
       total ++ ;
       cout << min << " ~ " << max ;

      }else if (answer == password){
       cout << total << " 次 " << '\n' ;
       cout << " success" << '\n' ;
       total ++ ;
      }

    }while(answer != password) ;
  }
} 