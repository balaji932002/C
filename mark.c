int s1=20;
void main()
{
	printf("%d \n",s1);
	int s2,s3;
	printf("%d \n",s1);
	printf("Enter s1,s2,s3 marks:");
	scanf("%d %d %d",&s1,&s2,&s3);
	printf("%d \n",s1);
	//int s1=20;
	
	
	if(s1>50)
	{
		printf("s1 pass \n");
	}
	else if(s1==50)
	{
		printf("just pass \n");
	}
	else
	{
		printf("s1 Fail \n");
	}
	
	if(s2>=50)
	{
		printf("S2 Pass \n");
		
	}
	else
	{
		printf("S2 Fail \n");
		
	}
	
	if(s3>=50)
	{
		printf("s3 pass\n");
		
	}
	else
	{
		printf("s3 fail \n");
	}
}
