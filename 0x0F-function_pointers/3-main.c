#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"



int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	char operator = argv[2][0];
	int num2 = atoi(argv[3]);
	int result = 0;

	if (argc != 4)
	{
		printf("%s\n","Error");
		
		return (98);
	}
	if (operator == '+' || operator == '-' || operator == '*' || operator == '/' || operator == '%')
	{
		if ((operator == '/' || operator == '%')&& num2 == 0)
		{
			printf("Error\n");
			return 100;
		}
		int (*operation)(int, int) = get_op_func(operator);
		if (operation)
		{
			result = operation(num1, num2);
			printf("%d\n", result);
		}
	}
	else
	{
		printf("Error\n");
		return (99);
	}
}
