//Sum of n natural numbers 

#include <stdio.h>
int add(int n)
{
	if(n==0)
		return 0;
	else
		return add(n-1)+n;
}
int main()
{
	int n=10;
	printf("%d ",add(n));
}
