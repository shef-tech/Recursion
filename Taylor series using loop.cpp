//Taylor series using loop

#include <stdio.h>
double e(int x,int n)
{
	double num=1,dem=1;
	double S=1;
	int i;
	for(i=1;i<=n;i++)
	{
		num*=x;
		dem*=i;
		S=S+num/dem;
	}
	return S;
}
int main()
{
	printf("%lf",e(2,10));
	return 0;
}
