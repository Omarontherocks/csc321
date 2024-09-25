//Omar Flores
//csc-321
//lab 4b

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a = 0;	
	float b  = 0.0;
	double c = 0.0;
	char d = 'a';
	
	printf("Please enter an integer: ");
	scanf("%d", &a);
	
	printf("Please enter a float: ");
	scanf("%f", &b);

	printf("Please enter a double: ");
	scanf("%lf", &c);
	
	printf("Please enter a character: ");
	scanf(" %c", &d);

	if(a > 7)
	{
		printf("Your integer is larger than 7 \n");
	}
	else if (a == 7)
	{
		printf("Your integer is equal to 7 \n");
	}
	else
	{
		printf("Your integer is less than 7 \n");
	}
	
	if(b > 1.1)
	{
		printf("Your float is larger than 1.1 \n");
	}
	else if (b == 1.1)
	{
		printf("Your float is equal to 1.1 \n");
	}
	else
	{
		printf("Your float is less than 1.1 \n");
	}

	if(c > 3.14)
	{
		printf("Your double is larger than Pie \n");
	}
	else if (c == 3.14)
	{
		printf("Your double is equal to Pie \n");
	}
	else
	{
		printf("Your double is less than Pie \n");
	}


	if(d != 'a')
	{
		printf("Your character is not a \n");
	}
	else 
	{
		printf("Your character is a! \n");
	}

	return EXIT_SUCCESS;

}
