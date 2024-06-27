#include <stdio.h>

/**
 * main - finds and prints first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (Sucess)
 */

int main(void)

{
        int count = 0;
        unsigned long fib1 = 0, fib2 = 1, sum;
        unsigned long fib1_mi1, fib1_mi2, fib2_mi1, fib2_mi2;
        unsigned long mi1, mi2;

        while (count < 92)
        {
                sum = fib1 + fib2;
                printf("%lu, ", sum);

                fib1 = fib2;
                fib2 = sum;
                count++;
        }

        fib1_mi1 = fib1 / 10000000000;
        fib2_mi1 = fib2 / 10000000000;
        fib1_mi2 = fib1 % 10000000000;
        fib2_mi1 = fib2 % 10000000000;

        count = 93;
        while (count < 99)
        {
                mi1 = fib1_mi1 + fib2_mi1;
                mi2 = fib1_mi2 + fib2_mi2;
                if (fib1_mi2 + fib2_mi2 > 9999999999)
                {
                        mi1 += 1;
                        mi2 %= 10000000000;
                }

                printf("%lu%lu", mi1, mi2);
                if (count != 98)
                        printf(", ");

                fib1_mi1 = fib2_mi1;
                fib1_mi2 = fib2_mi2;
                fib2_mi1 = mi1;
                fib2_mi2 = mi2;
                count++;
        }
        printf("\n");

        return (0);
}
