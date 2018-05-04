//http://www.oodlescoop.com/tutorial/c-basic/simple-calculator-using-if-else.jsp
#include<stdio.h>
#include<stdlib.h>

void main()
{
	float a, b;
	char opcode;

	printf("Enter two numbers\n");
	scanf("%f %f", &a, &b);

	printf("Enter\n'+' to add\n'-' to subtract\n'*' to multiply\n'/' to divide\n");
	scanf(" %c", &opcode);
	
	if(opcode == '+')
		printf("Sum = %f\n", a + b);
		
	else if(opcode == '-')
		printf("Difference = %f\n", a - b);
		
	else if(opcode == '*')
		printf("Multiplication = %f\n", a + b);
		
	else if(opcode == '/')
	{
		if(b == 0)
		{
			printf("Divide By Zero Error\n");
			exit(0);
		}
		else
			printf("Division = %f\n", a + b);
	}
	else
		printf("Invalid Operator\n");
}