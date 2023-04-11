//Sum of n natural numbers using loop

#include <stdio.h>
int sum(int n)
{
	int i,s=0;
	for(i=0;i<=n;i++)
	{
		s=s+i;
	}
	return s;
}
int main()
{
	printf("%d",sum(5));
}
