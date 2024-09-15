#include<stdio.h>
int main()
{
	int a=5,b=8,c=4,d=2;
	int a1,b1,c1,d1;
	a1=a++;
	b1=++b;
	c1=c--;
	d1=--d;
	printf("a1 = %d,a=%d",a1,a);
	printf("\n b1=%d,b=%d",b1,b);
	printf("\n c1 = %d,c=%d",c1,c);
	printf("\n d1 = %d,d=%d",d1,d);
} 
