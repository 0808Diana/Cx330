#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int j,n;
	cin>>n;
for(j=0;j<n;j++)
{ 
	int i=0,a[6]={0},sum=0;
	double pjs=0,fc=0,count=0;
	for(i=0;i<6;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
		pjs=(double) sum/6;
		cout<<fixed<<setprecision(2)<<pjs<<endl;
	for(i=0;i<6;i++)
	{
		count+=(a[i]-pjs)*(a[i]-pjs);
	}
	fc=count/6;
	cout<<fixed<<setprecision(2)<<fc<<endl;
}
	return 0;
}
