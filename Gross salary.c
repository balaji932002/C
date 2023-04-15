#include<stdio.h>
#include<conio.h>
void main() 
{
	
	float BS;
	float RA,DA,GS;
	printf("Basic salary is:");
	scanf("%f",&BS);
	//printf("Basic Salary is %d\n",BS);
	//scanf("%d",&BS);
	DA=(((float)40/100)*BS);
	RA=(((float)20/100)*BS);
	printf("Dearness allowance and Rent allowance %f and %f\n",DA,RA);
	GS=BS+DA+RA;
	printf("Gross salary is:%f",GS);
}
