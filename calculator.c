#include <stdio.h>
int main()
{
	float num1, num2;
	char op;
	printf("enter the first number: ");
	scanf("%f", &num1);
	printf("enter the second number: ");
	scanf("%f", &num2);
	printf("choose operator(+,-,*,/): ");
	scanf(" %c", &op); // %c ke phele space dene se operator wala bhi input lega
	if (op == '+')
	{
		printf("Result:  %.2f", num1 + num2);
	}
	else if (op == '-')
	{
		printf("Result:  %.2f", num1 - num2);
	}
	else if (op == '*')
	{
		printf("Result:  %.2f", num1 * num2);
	}
	else if (op == '/')
	{
		if (num2 == 0)
		{
			printf("not defiend ");
		}
		else
		{
			printf("Result:  %.2f", num1 / num2);
		}
	}
	return 0;
}
