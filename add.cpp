#include<iostream>
using namespace std;
int add(int,int);
int add(float,float);
int main()
{
	int a,b;
	float c,d;
	cout<<"enter Two number";
	cin>>a>>b;
	add(a,b);
	cout<<endl<<"enter two number float type";
	cin>>c>>d;
	add(c,d);
	
}
int add(int a,int b)
{
	int c=a+b;
	cout<<"addition is:"<<c;
	return 0;
}
int add(float c,float d)
{
	float res;
	res=c+d;
	cout<<"Result is"<<res;
	return 0;
}
