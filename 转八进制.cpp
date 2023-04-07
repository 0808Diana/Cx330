#include <iostream>
using namespace std;

int main()
{
	int a[5],i,n;
	cin>>n;
	for(i=0;i<5;i++)
	{
		a[i]=n%8;
		n=n/8;
	}
	for(i=4;i>=0;i--)
	{
		cout<<a[i];
	}
	return 0;
}
