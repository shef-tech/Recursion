//Exponent m^n using recursion modified 

#include <stdio.h>
int pow(int m,int n)
{
	if(n==0)
		return 1;
	if(n%2==0)
		return pow(m*m,n/2);
	return m*pow(m*m,(n-1)/2);
}
int main()
{
	int r;
	r=pow(2,5);
	printf("%d",r);
}
