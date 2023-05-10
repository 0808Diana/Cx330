#include <iostream>
using namespace std;
int IsCancle(int a[],int n,int k)
{
	int i,T=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<=0)
		{
			T++;
		}
	}
	if(T>=k)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	int a[1000],n,k;
	cin>>n>>k;
	int sum=IsCancle(a,n,k);
	if(sum==1)
	{
		cout<<"YES"<<endl;
	}
	if(sum==0)
	{
		cout<<"NO"<<endl;
	}
	return 0;
} 
