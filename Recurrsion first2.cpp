#include <stdio.h>
void fun(int n)
{
	if(n>0)
	{
		fun(n-1);
		printf("%4d",n);
	}
}
int main()
{
	int n=4;
	fun(n);
}
