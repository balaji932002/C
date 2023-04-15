#include<stdio.h>
#include<math.h>
void main()
{
	/*double l1,l2,l3,l4;
	float PI;
	l1=30;\
	l3=l1*(PI/180);
	printf("%f",l3);*/
	
	double degree1,degree2;
	double radian1,radian2,g1,g2,D;
	printf("enter angles value:");
	scanf("%lf%lf",&degree1,&degree2);
	//printf("%lf%lf",radian1,radian2);
	
	//double radian1,radian2,g1,g2,D;
	
	//D=3963*pow(cos,-1)*(sin(radian1)*sin(radian2)+cos(radian1)*cos(radian2));
	radian1=degree1*(M_PI/180);
	radian2=degree2*(M_PI/180);
	printf("%lf and %lf\n",radian1,radian2);
	D=3963*(acos(-1))*(sin(radian1)*sin(radian2)+cos(radian1)*cos(radian2));
	printf("ans:%lf",D);
	
	
		
	/*printf("sin value %lf\n",sin(radian));
	printf("cos value %lf\n",cos(radian));
	printf("tan value %lf",tan(radian));*/
	
	//int a;
	//printf("ans is:%d",3+5);
	
	
}
