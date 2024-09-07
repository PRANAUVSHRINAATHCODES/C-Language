#include<stdio.h>
int main()
{
	int n= 10;
	int block1();
	int block2();

	printf("In Main Block n=%d",n);

	
	
}
int block1()
{
	int n=20;
	printf("In Block 1 n=%d",n);
	
}
int block2()
{
	int n=30;
	printf("In Block 2 n=%d",n);
}

