#include<iostream>
using namespace std;
int pow(int,int);
int main()
{
	int base,expo;
	cout<<"enter your base and expo";
	cin>>base>>expo;
	pow(base,expo);
	return 0;
}
int pow(int base,int expo)
{
	int i,res=1;
	for(i=0;i<expo;i++)
	{
		res=res*base;
	}
	cout<<"power of base"<<base<<"and exponent is"<<expo<<":"<<res;
	return 0;
}
