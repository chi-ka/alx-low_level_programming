#include <stdio.h>

int is_digit(char c) {
    return (c >= '0' && c <= '9');
}

int str_to_int(const char* str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-') {
        sign = -1;
        i = 1;
    }

    while (str[i] != '\0') {
        if (!is_digi`t(str[i])) {
            return 0;
        }
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result * sign;
}

int main(int argc, char* argv[]) {
    if (argc == 1) {
        printf("0\n");
        return 0;
    }

    int result = 0;
    int i;
    for (i = 1; i < argc; i++) {
        int num = str_to_int(argv[i]);
        if (num == 0 && argv[i][0] != '0') {
            printf("Error\n");
            return 1;
        }
        if (num > 0) {
            result += num;
        }
    }

    printf("%d\n", result);
    return 0;
}

