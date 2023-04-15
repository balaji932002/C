#include<stdio.h>
int main()
{
	int count=0;
	
	while(count<=255)
	{
		printf("\n%d - %c",count,count);
		
		count=count+1;
	}
	
	
	return 0;
}
