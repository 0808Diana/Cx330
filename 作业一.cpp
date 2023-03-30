#include <iostream>
using namespace std;

int main()
{
	int i,a,b,c,sum;
	cin>>i;
	a=i/100;
	b=i/10%10;
	c=i%10;
	sum=a+b+c;
	cout<<sum;
	return 0;
} 
