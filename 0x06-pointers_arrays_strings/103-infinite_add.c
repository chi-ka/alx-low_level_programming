#include <stdio.h>
#include <string.h>

char* infinite_add(char* n1, char* n2, char* r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;
	int digit1;
	int digit2;
	int sum;
	int len_r;
	int m;
	int temp;

	if (size_r <= len1 || size_r <= len2)
	{
		return (0);
	}
	
	while (i >= 0 || j >= 0 || carry != 0)
	{
		digit1 = (i >= 0) ? n1[i] - '0' : 0;
		digit2 = (j >= 0) ? n2[j] - '0' : 0;
		sum = digit1 + digit2 + carry;
		r[k] = sum % 10 + '0';
		carry = sum / 10;
		
		i--;
		j--;
		k++;
	}
	
	len_r = k;
	
	for (m = 0; m < len_r / 2; m++)
	{
		temp = r[m];
		r[m] = r[len_r - m - 1];
		r[len_r - m - 1] = temp;
	}
	r[len_r] = '\0';
	return (r);
}
