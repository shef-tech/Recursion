//Factorial using recursion

#include <stdio.h>
int fact(int n)
{
	if(n==0)
		return 1;
	else 
		return fact(n-1)*n;
}
int main()
{
	int r;
	r=fact(0);
	printf("%d  ",r);
}
