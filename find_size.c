#include <stdio.h>

int main()
{
    int a = 4;
    float b = 10.3;
    double c = 7.99;
    char s = 's';

    printf("size of a is %u \n", sizeof(a));
    printf("size of b is %u \n", sizeof(b));
    printf("size of c is %u \n", sizeof(c));
    printf("size of s is %u \n", sizeof(s));

    return 0;
}