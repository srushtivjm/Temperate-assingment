#include<stdio.h>
main()
{
	int n,nc=0;
	printf("Enter value of n=");
	scanf("%d",&n);
	
	for(n,nc;n!=nc;nc++)
	{
		n/=10;
	}
	printf("Number of digit=%d",nc);
}
