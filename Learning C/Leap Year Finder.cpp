#include<stdio.h>
int main()
{
	int year;
	printf("Enter a year :");
	scanf("%d",&year);
	
	if(year%100==0)
	{
		if(year%400==0)
		{
		
		printf("It is an leap year");
	    }
		else
		{
		
		printf("Not an leap year");
	    }
	}
	else
	{
		if(year%4==0)
		{
		
		printf("It is an leap year");
	    }
		else
		{
		
		printf("Not an leap year");
	}
	}
}
