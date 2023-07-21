void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	int divisor = 1;
	int temp = n;
	while (temp >= 10)
	{
		divisor *= 10;
		temp /= 10;
	}
