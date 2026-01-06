#include <stdio.h>

void swap(int *, int *);

int main()
{
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    
    swap(&x, &y);

    printf("The value of x and y are %d, %d respectively\n", x, y);
}


void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
