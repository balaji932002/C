#include<stdio.h>
int main()
{
	int unit;
	float total,SC;
	
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		total=unit*0.50;
		printf("Total Electricity Bill=%f",total);
	}
	else if((unit>50)&&(unit<=100))
	{
		total=unit*0.75;
		printf("Total Electricity Bill=%f",total);
	}
	else if((unit>100)&&(unit<=250))
	{
		total=unit*1.20;
		printf("Total Electricity Bill=%f",total);
	}
	else
	{
		total=unit*1.50;
		printf("Total Electricity Bill=%f",total);
	}
	
	SC=((20/100)*total);
	printf("\nsurchare=%f",SC);
}
