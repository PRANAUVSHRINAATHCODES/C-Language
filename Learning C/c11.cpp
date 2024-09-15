#include<stdio.h>


	int findlargest(int a,int b,int c){
		return(a>b)?((a>c)?a:c):((b>c)?b:c);
	} 
int main()
{
	int num1,num2,num3;
	
	printf("Enter three numbers :\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	int largest=findlargest(num1,num2,num3);
	
	printf("The largest number is :%d\n",largest);
	
	
	}	

