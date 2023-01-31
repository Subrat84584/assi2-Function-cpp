#include<iostream>
using namespace std;
int area(int);
int area(int,int);
int main()
{
	int r,l,b;
	cout<<"enter the radius";
	cin>>r;
	area(r);
	cout<<"enter the value of l and b";
	cin>>l>>b;
	area(l,b);
}
int area(int r)
{
	float pi=3.14,ar;
	ar=pi*r*r;
	cout<<ar;
	return 0;
}
int area(int l,int b)
{
	float ar;
	ar=l*b;
	cout<<ar;
}
