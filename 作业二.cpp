#include <iostream>
using namespace std;

int main()
{
	int n,i,j,t,a[100],m=0;
	cin>>n;
	a[n]=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=1;i<n;i++)
	{
		if(a[i]==a[i+1] && a[i]!=a[i-1] && a[i]!=a[i+2])
		{
		   printf("%d ",a[i]);
		}
	}
	return 0;
}
