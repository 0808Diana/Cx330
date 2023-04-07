#include <iostream>
using namespace std;

int Year(int year) 
{
    if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) 
	{
        return 1; 
    }
    return 0; 
}

int main()
{
	int a,b,c,i,sum;
	char d,e;
	int A[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
	cin>>a>>d>>b>>e>>c;
	for(i=1990;i<a;i++)
	{
		if(Year(i))
		{
			sum=sum+366;
		}
		else
		{
			sum=sum+365;
		}
	}
	if(Year(a))
	{
		A[2]=29;
		for(i=0;i<b;i++)
		{
			sum=sum+A[i];
		}
        sum=sum+c;
	} 
	else
	{
		for(i=0;i<b;i++)
		{
			sum=sum+A[i];
		}
        sum=sum+c;
	}
	if(sum%7==1)
	{
		cout<<"Sunday";
	}
	if(sum%7==2)
	{
		cout<<"Monday";
	}
	if(sum%7==3)
	{
		cout<<"Tuesday";
	}
	if(sum%7==4)
	{
		cout<<"Wednesday";
	}
	if(sum%7==5)
	{
		cout<<"Thursday";
	}
	if(sum%7==6)
	{
		cout<<"Friday";
	}
	if(sum%7==0)
	{
		cout<<"Saturday";
	}
	return 0;
}
