//6.swap function call by reference
#include<iostream>
using namespace std;
int swap(int&,int&);
int main()
{
	int a,b;
	cout<<"enter two number";
	cin>>a>>b;
	swap(a,b);
	cout<<a<<b;
}
int swap(int &a,int &b)
{
	int t;
	t=a;
	a=b;
	b=t;
}
