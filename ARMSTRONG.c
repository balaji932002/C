#include<stdio.h>
void main()
{
	int n,r,c,sum=0,temp;
	printf("enter n value:");
	scanf("%d",&n);
	temp=n;
	
	while(n>0)
	{
		r=n%10;
		c=r*r*r;
		sum=sum+c;
		n=n/10;
		
		
	}
	printf("%d",sum);
	
	n=temp;
	if(n==sum)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not armstrong number");
	}
}
