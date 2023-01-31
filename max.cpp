//write a program to print the maximum number btn two int value and two float value.
#include<iostream>
using namespace std;
int max(int a,int b)
{
	int c=a>b?a:b;
	cout<<c;
	return 0;
}
int max(float a,float b)
{
	float c=a>b?a:b;
	cout<<c;
	return 0;
}
int main()
{
	int a,b;
	float c,d;
	cout<<"enter two integer value";
	cin>>a>>b;
	max(a,b);
	cout<<"enter two floating value";
	cin>>c>>d;
	max(c,d);
	return 0;
}
