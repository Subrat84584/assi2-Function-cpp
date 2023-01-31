//Default argument
#include<iostream>
using namespace std;
int add(int,int,int=0);   //we can write this here int=0,int=0,int=0
int main()
{
	int a,b,c;
	cout<<"enter two number";
	cin>>a>>b;
	add(a,b);
	
	cout<<"\nenter three number";
	cin>>a>>b>>c;
	add(a,b,c);
	return 0;
}
int add(int a,int b,int c)
{
	int z=a+b+c;
	cout<<"sum of numbers"<<z;
}
