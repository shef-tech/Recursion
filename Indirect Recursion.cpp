//Indirect Recursion
#include <stdio.h>
int funB(int n);
int funA(int n)
{
	if(n>0)
	{
		printf("%d  ",n);
		funB(n-1);
	}
}
int funB(int n)
{
	if(n>1)
	{
		printf("%d  ",n);
		funA(n/2);
	}
}
int main()
{
	int n=20;
	funA(n);
}
