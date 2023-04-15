#include<stdio.h>
int main()
{
	int value,ans=0,a,b,c,d;
	scanf("%d",&value);
	a=value%10;
	//b=value/10;
	value=value/10;
	//c=b%10;
	c=value%10;
	//d=b/10;
	d=value/10;
	ans=a+c+d;
	printf("answer=%d",ans);
	return 0;
	 
	
}
