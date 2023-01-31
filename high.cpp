#include<iostream>
using namespace std;
int highest(int n);
int main()
{
	int num;
	cout<<"enter you number";
	cin>>num;
	highest(num);
}
int highest(int n)
{
	int i,c=0,r,rem;
	r=n;
	while(r!=0)
	{
        r=r/10;
		c++;		
	}
	int a[c];    //number of digit equal to c
	for(i=0;i<c;i++)
	{
	    rem=n%10;
		a[i]=rem;     //all indivisual number assign in to array
		n=n/10;	
	}
	int max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	cout<<endl<<"Maximum number is"<<max;
	return 0;
		
}
