
#include<stdio.h>
int main()
{
    char a;
	char value;
    scanf("%c",&a);
    value=("%d",a);
    //value = a;
    printf("value=%d",value);
    
    if((value>='A')&&(value<='Z'))
      printf("\nit is capital letter alphabet");
    else if((value>=97)&&(value<=122))
      printf("\nit is small letter alphabet");
    else
      printf("\nnot alphabet");
    return 0;
	
}
