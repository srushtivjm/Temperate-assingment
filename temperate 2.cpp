#include<stdio.h>
main()
{
	int a=1,n;
	printf("Enter value for table=");
	scanf("%d",&n);
	
	for(a,n;a<=10;a++)
	{
		printf("%d x %d = %d\n",n,a,n*a);
	}
}
