#include<stdio.h>
main()
{
	int fd,sd,n,s;
	
	printf("Enter value=");
	scanf("%d",&n);
	
	while(n>fd)
	{
		printf("%d\n",fd);
		s=fd+sd;
		fd=sd;
		sd=s;
	}
}
