#include <stdio.h>
void fun(int n)
{
	if(n>0)
	{
		printf("%4d",n);
		fun(n-1);
	}
}
int main()
{
	int n=3;
	fun(n);
}
