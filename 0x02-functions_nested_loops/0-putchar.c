#include <stdio.h>


/**Main - Entry point
 *
 *Ends with Return(0)*/

int main(void)
{
	size_t i;
	char putchararray[] = {'_','p','u','r','t','c','h','a','r'};

	for(i = 0; i < (sizeof(putchararray)/ sizeof(putchararray[0])); i++)
	{
		putchar(putchararray[i]);
	}
	putchar('\n');

	return(0);
}
