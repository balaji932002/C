#include<stdio.h>
int main()
{
	int value,ans=0,a,b,c,d;
	scanf("%d",&value);
	a=value%10;
	//printf("\n%d",a);
	b=value/10;
	//printf("\n%d",b);
	c=b%10;
	//printf("\n%d",c);
	d=b/10;
	//printf("\n%d",d);
	
	ans=(a*100)+(c*10)+d;
	printf("answer=%d",ans);
}
