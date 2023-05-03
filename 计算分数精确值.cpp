#include <iostream>
using namespace std;

int main()
{
	int x,y;
	char a;
	double m;
	cin>>x>>a>>y;
	cout<<"0.";
	for(int i=0;i<200;i++)
	{
		int n=0;
		n=10*x/y;
		cout<<n;
		x=10*x%y;
		if(10*x%y==0)
		{
			break;
		}
	}
	return 0;
}
