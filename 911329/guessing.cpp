#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0, l=1, r=100;

    srand(time(NULL));
    int ans = rand()%100+1;

    while(n != ans){
        cout << l << '-' << r << ": ";
        cin >> n;
        if(n<l || n>r) cout << "Out of range!\n";
        else if(n<ans) l = n;
        else r = n;
    }
    cout << "You found it! The answer is " << ans << ".\n";
}
