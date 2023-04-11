#include <stdio.h>
double e(int x,int n)
{
	static double P=1,F=1;
	static double r;
	if(n==0)
	{
		return 1;
		}
	r=e(x,n-1);
	P=P*x;
	F=F*n;
	return r+P/F;	
}
int main()
{
	printf("%lf",e(2,10));
}

