#include <iostream>
using namespace std;

double Circumference(double R)
{
	return 2*3.14*R;
}
double Square(double R)
{
	return R*R*3.14;
}
double D(double R)
{
	return 2*R;
}

int main()
{
	double n;
	cin>>n;
	cout<<"ֱ��="<<D(n)<<endl;
	cout<<"�ܳ�="<<Circumference(n)<<endl;
	cout<<"���="<<Square(n)<<endl;
	return 0;
}
