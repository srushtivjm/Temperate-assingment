#include<stdio.h>
main()
{
	int n,fact;
	printf("Enter value of n=");
	scanf("%d",&n);
	
	for(n,fact=1;n>=1;n--)
	{
		fact=fact*n;
	}
	printf("fectorial=%d",fact);
}
