#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char a[32],b[32];
	int i=0,j=0;
	cin>>a;
	int t=strlen(a);
	for(i=t-1;i>=0;i--)
	{
		if(j<t)
		{
			b[i]=a[j];
		    j++;
		}
	}
	for(i=0;i<t;i++)
	{
		cout<<b[i];
	}
	return 0;
} 
