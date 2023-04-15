#include<stdio.h>
void main()
{
	int a=10,b=20,c=30,temp;
	/*printf("enter a value:");
	scanf("%d",&a);
	printf("enter b value:");
	scanf("%d",&b);
	printf("enter c value:");
	scanf("%d",&c);*/
	//printf("%d %d %d",a,b,c);
	temp=c;
	
	c=a;
	printf("%d %d %d",a,b,c);
	b=a;
	c=temp;
	//printf("%d %d %d",a,b,c);
	
	
	/*temp=b;
	b=a;
	a=temp;
	printf("%d%d",a,b);	*/
	//int c=10;
	
	
}
