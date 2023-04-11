//Combination formula nCr 

#include <stdio.h>
//nCr using common process
int fact(int n)
{
	if(n==0)
		return 1;
		
	return fact(n-1)*n;
}
int nCr(int n,int r)
{
	if(r>n)
		printf("Please enter the value of r less than or equal to n");
		
	int num,dem;
	num=fact(n);
	dem=fact(r)*fact(n-r);
	return num/dem;
}

//nCr using recursion
int NCR(int n,int r)
{
	if(r>n)
		printf("Please enter the value of r less than or equal to n");
	else{	
	if(r==0 || n==r)
		return 1;
	return NCR(n-1,r-1)+NCR(n-1,r);
	}
}
int main()
{
	printf("nCr using simple way : %d\n",nCr(5,3));
	printf("nCr using recursion: %d",NCR(2,1));
}
