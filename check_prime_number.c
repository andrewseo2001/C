#include <stdbool.h>
#include <stdio.h>

// We can check whether the number is prime or not by iterating in the range from 1 to n using loops. We will count the number of divisors.
// If there are more than 2 divisor (including 1 and n) then the given number n is not prime, else n is prime.
// This method is known as trial division method.

int main()
{
    int n = 29;

    int cnt = 0;

    // If number is less than/equal to 1,
    // it is not prime
    if (n <= 1)
    {
        printf("%d is NOT prime \n", n);
    }
    else
    {

        // Check for divisors from 1 to n
        for (int i = 1; i <= n; i++)
        {
            // Check number of divisors
            if (n % i == 0)
            {
                cnt++;
            }
        }

        // If n is divisible by more than 2 numbers
        // then it is not prime

        if (cnt > 2)
        {
            printf("%d is NOT prime \n", n);
        }

        else
            printf("%d is prime", n);
    }

    return 0;
}