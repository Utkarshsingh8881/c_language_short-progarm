#include <stdio.h>

int main()
{
	int a = 23;
	int *p = &a;
	printf("%d\n",p);
	printf("%d\n",p+1);
	return 0;
} 
