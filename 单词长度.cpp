#include <iostream>
#include <string.h>
using namespace std;

int main() 
{
	char a[100]={0};
	int i,t=0;
	cin.get(a,100);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=' '&&a[i]!='.')
		{
			t++;
		}
		else if(a[i]==' '||a[i]=='.')
		{
			cout<<t<<' ';
			t=0;
		}
	}
	return 0;
} 
