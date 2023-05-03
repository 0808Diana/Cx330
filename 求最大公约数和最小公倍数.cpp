#include <iostream>
using namespace std;

void Zuidagys(int x,int y)
{
	int z;
	if(x<=y)
	{
		z=y;
	}
	else
	{
		z=x;
	}
	for(int i=z;i>0;i--)
	{
		if(x%i==0 && y%i==0)
		{
			cout<<i<<endl;
			break; 
		}
	}
}

void Zuixiaogbs(int x,int y)
{
	for(int i=1; ;i++)
	{
		if(i%x==0 && i%y==0)
		{
			cout<<i<<endl;
			break;
		}
	}
}
int main()
{
	int x,y;
	cin>>x>>y;
	Zuidagys(x,y);
	Zuixiaogbs(x,y);
	return 0;
}
