#include<iostream>
using namespace std;

int main()
{
	int m,i;
	cin>>m;
    for(i=0;i<m;i++)
  {
  	int n=0,a[1000]={0},k,j,x,z;
	scanf("%d", &n);
	for (j= 0; j< n; j++) 
	{
		a[j] = 1;
		for (k = j - 1; k > 0; k--)
	    {
			if (k > 0)
			a[k] = a[k] + a[k - 1];
		}
		for (z = 0; z < n-j-1; z++)
	    {
			printf(" ");
		}
		for (x = 0; x < n; x++) 
		{
			if (a[x] != 0)
			printf("%4d", a[x]);
		}
		printf("\n");
	}
  }
	return 0;
}

