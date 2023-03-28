#include<stdio.h>
main()
{
	int n,l_d,fn,sum;
	fn=n;
	printf("Enter value of n=");//300
	scanf("%d",&n);
	
	while(fn>=10)
	{
	    fn=fn/10;//30
	}
	l_d=l_d%10;//0
	
	sum=fn+l_d;//30+0=30
	
	printf("sum of first and last digit=%d",sum);
}
