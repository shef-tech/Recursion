//Taylor series using recursion O(n^2)

#include <stdio.h>
double e(int x,int n)
{
	double r;
	static double P=1,F=1;
	if(n==0)
		return 1;
	else{
		r=e(x,n-1);
		P=P*x;
		F=F*n;
		return r+(P/F);
	}
}
int main()
{
	printf("%lf ",e(3,8));
}
