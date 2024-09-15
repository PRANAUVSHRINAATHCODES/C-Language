#include<stdio.h>

int main()
{
	int num1,num2;
	char o;
	
	printf("Enter number 1:");
	scanf("%d",&num1);
	
	printf("Enter number 2:");
	scanf("%d",&num2);
	
	printf("Enter operator :");
	scanf("\n %c",&o);
	
	if(o =='+')
	{
		printf("Sum : %d", num1+num2);
		
	}
	else if(o =='-')
	{
		printf("Difference : %d", num1-num2);
	}
	else if(o =='*')
	{
		printf("Multiplication : %d", num1*num2);
	}
	else if(o =='/')
	{
		printf("Division : %d", num1/num2);
	}
	else
	{
		printf("Invalid operator");
	}
	
}
