#include <stdio.h>

int main(void)

{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char:%lu\n",(unassigned long)sizeof(a));
	printf("Size of an int:%lu\n",(unassigned long)sizeof(b));
	printf("Size of a long int:%lu\n",(unassigned long)sizeof(c));
	printf("Size of a long long int:%lu\n",(unassigned long)sizeof(d));
	printf("Size of a float:%lu\n",(unassigned long)sizeof(e));
}

