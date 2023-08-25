#include <stdio.h>

int main() 
{
    char hello[] = "Hello, Holberton\n";

    for (int i = 0; hello[i] != '\0'; i++)
    {
        putchar(hello[i]);
    }

    return 0;
}

