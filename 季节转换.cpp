#include <iostream> 
using namespace std;

class season
{
	public:
		number(int n);
		print(int n);
	private:
		int n;
};
print(int n)
{
	if(n==1)
	{
	   cout<<"Spring"<<endl;
	}
	else if(n==2)
	{
	   cout<<"Summer";
	}
	else if(n==3)
	{
	   cout<<"Fall";
	}
	else if(n==4)
	{
	   cout<<"Winter";
	}
}
int main()
{
	season season1;
	int n;
	cin>>n;
	print(n);
}
