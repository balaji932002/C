#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	
	if ((a>b)&&(a>c))
	{
		if(b>c)
		  printf("b is second largest number=%d",b);
		else
		  printf("c is second largest number=%d",c);
	}

	else if((b>c)&&(b>a))
	{
		
	 
	  
	  	if(a>c)
	  	  printf("a is second largest number=%d",a);
	  	else
	  	  printf("c is second largest number=%d",c);
	}

	else
	{
		if(a>b)
		  printf("a is second largest number=%d",a);
		else
	      printf("b is second largest number=%d",b);	

	}

	
}
