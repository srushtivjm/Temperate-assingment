#include<stdio.h>
main()
{
	int a,temp,s,p=0;
	printf("Enter number=");
	scanf("%d",&a);
	
	temp=a;
	while(a!=0)
	{
		s=a%10;
		p=p*10+s;
		a=a/10;
	}
	printf("revers=%d",p);
	if(temp==p)
	{
		printf("\nPelindrom");
	}
	else
	{
		printf("\nNot Pelindrom");
	}
}



