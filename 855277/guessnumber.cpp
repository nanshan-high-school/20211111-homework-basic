#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
using namespace std;
int main(){
	cout<<"��¦��\n";
	int min=1,max=99,ans=87;
	double num=0;
	do{	
	cout<<min<<"~"<<max<<"?\n";  
	num=0;
	cin>>num;
	cout<<"\n";
	if (num<min || num>max)
		cout<<"error\n";
	else if (num>ans)
		max=num;
	else if(num<ans)
		min=num;
	}while(num!=ans);
	cout<<"ture\n";
	cout<<"\n";
	
	cout<<"�üƪ�\n";
	srand(time(NULL));
	int ans1=rand()%100+1;
	num=1;
	min=1;
	max=99;
	do{	
	cout<<min<<"~"<<max<<"?\n";  
	cin>>num;
	cout<<"\n";
	if(num==855277)
		num=ans1;
		cout<<"���L";
	if (num<min || num>max)
		cout<<"error\n";
	else if (num>ans1)
		max=num;
	else if(num<ans1)
		min=num;
	}while(num!=ans1);
	cout<<"true\n";
	cout<<"\n";
	
	cout<<"���q���q(��J1~99999���������)\n";
	int a=1;
	do{	
	cin>>ans;
	if (ans<1 || ans>99999)
		cout<<"error\n";
	else
	    a=2;
	}while(a!=2);
	num=1;
	min=1;
	max=99999;
	do{	
	cout<<min<<"~"<<max<<"?\n";  
    num=rand()%(max-min)+min;
	cout<<num<<"\n";
	if (num<min || num>max)
		cout<<"error\n";
	else if (num>ans)
		max=num;
	else if(num<ans)
		min=num;
	}while(num!=ans);
	
	cout<<"�����z���q���q(��J1~99999���������)\n";
	a=1;
	do{	
	cin>>ans;
	if (ans<1 || ans>99999)
		cout<<"error\n";
	else
	    a=2;
	}while(a!=2);
	num=1;
	min=1;
	max=99999;
	do{	
	cout<<min<<"~"<<max<<"?\n";  
    num=(max+min)/2;
	cout<<num<<"\n";
	if (num<min || num>max)
		cout<<"error\n";
	else if (num>ans)
		max=num;
	else if(num<ans)
		min=num;
	}while(num!=ans);
}
