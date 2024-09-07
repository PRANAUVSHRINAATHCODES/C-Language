#include<stdio.h>
int main()
{
	int a=2;
	int b=5;
	
	if(a==b)
	{
		printf("True\n");
		printf("This is a line");
	}
	else if(a>b)
	{
		printf("a is bigger");
	}
	else if(b>a)
	{
		printf("b is bigger");
	}
	else
	{
		printf("False\n");
		printf("This is not a line");
	}
}
