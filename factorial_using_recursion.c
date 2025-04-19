#include <stdio.h>

unsigned int factorial(int n)
{
    // Base case:
    if (n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    // iterative solution
    // double num = 19;

    // for (double i = (num - 1); i > 0; i--)
    // {
    //     num = num * i;
    // }

    // recursion

    int num = 6;

    printf("num factorial is %d", factorial(num));
}