#include<stdio.h>
int main()
{
	int days,fine;
	printf("Extended days = ");
	scanf("%d",&days);
	
	if ((days>=1)&&(days<=5))
	{
		fine=days*50;
		printf("Fine amount = %d paise",fine);
	
	}
	
	else if((days>=6)&&(days<=10))
	{
		fine=days*1;
		printf("Fine amount = %d rupees",fine);
	}
	else if((days>=10)&&(days<30))
	{
		fine=days*5;
		printf("Fine amount = %d rupees",fine);
		
	}
	else
	    printf("your membership has cancelled");
}
