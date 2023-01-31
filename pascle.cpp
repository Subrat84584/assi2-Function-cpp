//Defined a function to print pascal triangle up to N lines.
#include<iostream>
using namespace std;
int fact(int n)
{
	if(n<=0)
	return 1;
	int fact=1;
	for(int i=1;i<=n;i++)
	  fact=fact*i;
	  return fact;
}
int comb(int n,int r)
{
	int com=fact(n) / (fact(r)*fact(n-r));
	return com;
}
int main()
{
	int n;
	cout<<"enter the row"<<endl;
	cin>>n;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			int k=0;
			if(j==0)
			while(k++ <= (n/2-i+1))
			printf(" ");
			
	        printf("%d ",comb(i,j));	
		}
		printf("\n");
    }
    return 0;
}

