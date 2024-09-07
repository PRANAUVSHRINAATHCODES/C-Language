#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the value for x :");
	scanf("%d",&x);
	
	printf("Enter the value of y :");
	scanf("%d",&y);
	
	int p=x*y;
	int s=x+y;
	int total = s*s + p*(s-x)*(p+y);
	
	printf("the total is:%d\n",total);
}
