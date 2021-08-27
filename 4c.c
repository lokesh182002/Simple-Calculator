#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	char op;
	printf("Enter an operator");
	scanf("%c",&op);
	printf("Enter values of a,b");
	scanf("%d%d",&a,&b);
	switch(op)
{
	case '+' : c=a+b;
	           printf("\n%d+%d=%d",a,b,c);
	           break;
    case '-' : c=a-b;
	           printf("\n%d-%d=%d",a,b,c);
	           break;
	case '*' : c=a*b;
	           printf("\n%d*%d=%d",a,b,c);
	           break;
	case '/' : c=a/b;
	           printf("\n%d/%d=%d",a,b,c);
	           break;
	case '%' : c=a%b;
	           printf("\n%d%%d=%d",a,b,c);
	           break;
   	default : printf("\nINVALID Operator");
	           

	}	
	return 0;
}
