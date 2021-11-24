#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
using namespace std;
int main(){
	cout<<"基礎版\n";
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
	
	cout<<"亂數版\n";
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
		cout<<"跳過";
	if (num<min || num>max)
		cout<<"error\n";
	else if (num>ans1)
		max=num;
	else if(num<ans1)
		min=num;
	}while(num!=ans1);
	cout<<"true\n";
	cout<<"\n";
	
	cout<<"給電腦猜(輸入1~99999間的正整數)\n";
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
	
	cout<<"給智慧型電腦猜(輸入1~99999間的正整數)\n";
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
