//Taylor series using horners rule recursion

#include <stdio.h>
double e(int x,int n)
{
	static double S=1;
	if(n==0)
		return S;
	S=1+x*S/n;
	return e(x,n-1);
}
int main()
{
	printf("%lf",e(4,6));
}
