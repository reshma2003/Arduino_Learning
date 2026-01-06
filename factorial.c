#include <stdio.h>

int factorial(int);

int main()
{
    int a;

    printf("Enter the integer value for a: ");
    scanf("%d", &a);

    int fact = factorial(a);

    printf("Factorial of a = %d\n", fact);
    return 0;
}


int factorial(int n)
{
    int f;
    if (n == 0)
        return 1;
    else
    {
        f = n * factorial(n - 1);
        
        return f;
    }
}
