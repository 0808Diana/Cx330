#include <iostream>
using namespace std;

int pow(int x,int n)
{
	int zhi=1;
	for(int i=0;i<n;i++)
	{
		zhi=zhi*x;
	}
	return zhi;
}
int main()
{
	int x,n;
	cin>>x>>n;
	int zhi=pow(x,n);
	cout<<zhi;
	return 0;
}
