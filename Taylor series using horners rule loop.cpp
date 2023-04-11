//taylor Series after taking common O(n) using loop

#include <stdio.h>
double e(int x,int n)
{
	double S=1;
	for(;n>0;n--)
	{
		S=1+x*S/n;
	}
	return S;
}
int main()
{
	printf("%lf",e(12,5));
}
