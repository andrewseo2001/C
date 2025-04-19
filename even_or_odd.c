#include <stdio.h>

void checkEvenOdd(int num)
{

    if (num % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}
int main()
{
    int a = 13;
    int b = 0;
    int c = 2;

    checkEvenOdd(a);
    checkEvenOdd(b);
    checkEvenOdd(c);
}