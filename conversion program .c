#include<stdio.h>

int main()
{ char input;
float first, second;
float	kms_to_miles = 0.621371 ;
float	inches_to_foot = 0.08333330755166665;
float	cms_to_inches = 0.39370066559842520348;
float	pounds_to_kg = 0.453592 ;
float	inches_to_meter = 0.0254;


	while (1)
	{
		printf("1. to quite the program\n"
		"2. convert kms to miles\n"
		"3. convert inches to foot\n"
		"4. convert cms to inches\n"
		"5. convert pounds to kg\n"
		"6. convert inches to meter\n"
		"Enter the input character : ");
		scanf(" %c",&input);
		
		switch(input)
		{
			case '1':
				printf("\n Quitting the program ...");
				goto end;
				break;
			case '2':
				printf("Enter quantity in terms of first unit : ");
				scanf("%f",&first);
				second= first * kms_to_miles;
				printf("%.2f kms is equal to %.2f Miles .\n\n\n\n",first, second);
				break;
			case '3':
				printf("Enter quantity in terms of first unit : ");
				scanf("%f",&first);
				second= first * inches_to_foot;
				printf("%.2f inches is equal to %.2f foot. \n\n\n\n",first, second);
				break;
			case '4':
				printf("Enter quantity in terms of first unit : ");
				scanf("%f",&first);
				second= first * cms_to_inches;
				printf("%.2f cms is equal to %.2f inches .\n\n\n\n",first, second);
				break;
			case '5':
				printf("Enter quantity in terms of first unit : ");
				scanf("%f",&first);
				second= first * pounds_to_kg;
				printf("%.2f pound is equal to %.2f kg .\n\n\n\n",first, second);
				break;
			case '6':
				printf("Enter quantity in terms of first unit : ");
				scanf("%f",&first);
				second= first * inches_to_meter;
				printf("%.2f inches is equal to %.2f meter\n\n\n\n",first, second);
				break;
		}
	}
	end:
		return 0;
}
