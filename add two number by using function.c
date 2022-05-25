#include<stdio.h>

int sum(int num1 ,int num2)
{
	return num1+num2;
}

int main()
{
	int num1 , num2, total;
	printf("Enter num1 = ");
	scanf("%d",&num1);
	printf("Enter num2 = ");
	scanf("%d",&num2);
	total=sum(num1,num2);
	
	printf("Addition of two number is %d ", total );
	return 0;
	
	
}
