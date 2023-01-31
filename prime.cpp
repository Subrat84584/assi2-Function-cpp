#include<iostream>
using namespace std;
int prime(int);
int main()
{
	int num;
	cout<<"enter the value of num";
	cin>>num;
	prime(num);
}
int prime(int num)
{
	int i,c=0;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		c++;
	}
	if(c==0)
	{
		cout<<num<<" is a prime number";
	}
	else
	{
		cout<<num<<" is a not prime";
	}
	return 0;
}
