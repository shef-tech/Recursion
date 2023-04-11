//Factorial using recursion

#include <stdio.h>
int fact(int n)
{
	if(n==1)
		return 1;
	else 
		return fact(n-1)*n;
	return 0;
}
int main()
{
	int r;
	r=fact(5);
	printf("%d  ",r);
}
