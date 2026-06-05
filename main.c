#include <stdio.h>

// Function declaration
int add(int a, int b);

int main(int argc, char *argv[])
{
    int num1 = 10;
    int num2 = 20;

    int result = add(num1, num2);

    printf("Sum = %d\n", result);

    printf("Number of arguments: %d\n", argc);

    return 0;
}
