#include <iostream>
using namespace std;

int hws(int n)
{
	int ans=0,m=n;
	while(m>0)
	{
		ans=ans*10+m%10;
		m/=10;
	}
  if(ans==n)
  {
  	return 1;
  }
    return 0;
} 

int main()
{
	int n,i,m,k,j;
	cin>>n;
for(j=0;j<n;j++)
{
	cin>>m>>k;
	int T=0; 
	for(i=m; ;i++)
	{
		if(hws(i))
		{
			cout<<i<<"\t";
			T++;
		}
		if(T==k)
		{
			cout<<endl;
			break;
		}
	}
}
	return 0;
}
