#include <stdio.h>

int _atoi(char *s) {
    int result = 0;
    int sign = 1;

    // Skip leading whitespace characters
    while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r' || *s == '\f' || *s == '\v')
        s++;

    // Handle optional sign
    while (*s == '-' || *s == '+') {
        if (*s == '-')
            sign *= -1;

        s++;
    }

    // Convert numeric characters to an integer
    while (*s >= '0' && *s <= '9') {
        int digit = *s - '0';

        // Check for integer overflow
        if (result > (INT_MAX - digit) / 10) {
            if (sign == 1) {
                return INT_MAX;
            } else {
                return INT_MIN;
            }
        }

        result = result * 10 + digit;
        s++;
    }

    return result * sign;
}

