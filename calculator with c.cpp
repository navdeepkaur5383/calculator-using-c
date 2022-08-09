#include <stdio.h>
int main()
{
	int d,s,m;
	float a,b,dd;
	char x;
	printf("enter the first number for calculation\n");
	scanf("%f",&a);
	printf("enter the sign\n");
	scanf(" %c",&x);
	printf("enter the second number for calculation\n");
	scanf("%f",&b);
		switch(x)
	{
		case '+':
			d=a+b;
		printf("the answer is %d",d);	
		break;
		case '-':
		s=a-b;
		printf("the answer is %d",s);
		break;
		case '*':
		m=a*b;
		printf("the answer is %d",m);
		break;
		case '/':
		dd=a/b;
		printf("the answer is %f",dd);
		break;
		default:
		printf("enter the right sign");	
		break;
	}
	
}