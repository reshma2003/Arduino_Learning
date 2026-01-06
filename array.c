#include <stdio.h>

int main()
{
    
    int arr[5];
    int i;   

    for (i = 0; i < 5; i++)
    {
        printf("Enter the value of arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEntries of an array are as follows:\n{ ");

    for (i = 0; i < 5; i++)
    {
        printf("%d,\t", arr[i]);
    }

    printf("\b }\n");

    return 0;
}
