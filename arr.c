#include <stdio.h>

int main()
{
    int n;

    printf("Number of members in a team: ");
    scanf("%d", &n);

    int a[n];     
    int i;        

    
    for (i = 0; i < n; i++)
    {
        printf("Enter the age of roll number %d: a[%d] = ", i + 1, i);
        scanf("%d", &a[i]);
    }

    printf("\n--- All the values are entered successfully ---\n");

    
    do
    {
        printf("\n#######\n---- Welcome to log Book ----\n");
        printf("Enter the roll number: ");
        scanf("%d", &i);

        if (i >= 0 && i <= n)
        {
            printf("The age of roll number %d is: %d\n", i, a[i - 1]);
        }
        else
        {
            printf("--- INVALID ENTRY ---\n");
            printf("Team size is %d, Enter value less than or equal to %d\n", n, n);
        }

        printf("Press '0' to exit the log ");
    }
    while (i != 0);

    printf("The log is terminated...\nAs it is requested to terminate\n");
    return 0;
}
