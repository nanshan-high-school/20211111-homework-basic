#include <iostream>
using namespace std;
int main(){
	int num=1,min=1,max=999999,ans=855277;
	do{	
	cout<<min<<"~"<<max<<"?\n";  
	cin>>num;
	cout<<"\n";
	if (num<min || num>max)
		cout<<"error\n";
	else if (num>ans)
		max=num;
	else if(num<ans)
		min=num;
	}while(num!=ans);
}
