#include <stdio.h>
#include <math.h>
void roman(unsigned long n)
{
    unsigned long decimal[] = {1000000000, 9000000, 5000000, 4000000, 1000000, 500000, 400000, 100000, 90000, 50000, 40000, 10000, 5000, 4000, 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *str[] = {"((M))", "((lX))", "((V))", "((lV))", "(M)", "(lX)", "(V)", "(lV)", "(M)", "(D)", "(CD)", "(C)", "(XC)"
                                                                                                                    "(L)",
                   "(XL)", "(x)", "(v)", "(iv)"
                                         "M",
                   "CM", "D", "CD", "C", "XC", "L", "XL", "X", "lX", "V", "lV", "I"};
    int j = 0;

    while (n)
    {
        while (n / decimal[j])
        {
            printf("%s", str[j]);
            n = n - decimal[j];
        }
        j++;
    }
}
void binary(unsigned long n)

{

    if (n > 1)
        binary(n / 2);
    printf("%d", n % 2);
}

int main()
{
    unsigned long n;
    int i;
    scanf("%d", &n);
    printf("decimal number is %d\n", n);
    printf("binary number is :");
    binary(n);
    printf("\nroman number of is :");
    roman(n);
    return 0;
}
