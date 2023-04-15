#include<stdio.h>
int main()
{
	int value,a,b,c;
	scanf("%d",&value);
	a=value%10;
	b=value/1000;
	c=a+b;
	printf("sum of last & first digit=%d",c);
	return 0;
}
