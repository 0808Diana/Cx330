#include <iostream>
using namespace std;

int sort(int num[],int n)
{
	int t,i;
	for(i=0;i<n;i++)
	{
		cin>>num[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(num[j]>num[j+1])
			{
				t=num[j];
				num[j]=num[j+1];
				num[j+1]=t;
			}
		}
	}
	return 1;
}
int main()
{
	int num[100],i,n;
	cin>>n;
    int sum=sort(num,n);
    if(sum==1)
    {
    	for(i=0;i<n;i++)
    	{
    		cout<<num[i]<<'\t';
		}
	}
	return 0;
}
