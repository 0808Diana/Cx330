#include <iostream>
using namespace std;

int even(int x)
{
	if(x%2!=0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
 
int main()
{
 	int sum=0;
 	int i;
 	while(cin>>i)
 	{
 		if(even(i))
 		{
		   sum+=i; 
		}
		while(cin.peek()==' ')
		{
			cin.get();
		}
		if(cin.peek()<='0' || cin.peek()=='\n')
		{
			break;
		}
	}
	cout<<sum<<endl;
	return 0;
} 
