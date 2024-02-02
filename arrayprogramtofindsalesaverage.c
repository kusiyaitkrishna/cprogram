// this is a simple c program to calculate the average sales made in a week using array and for loop
#include <stdio.h>
int main()
{
    int sales[7];
    int total = 0;
    for (int i = 0; i < 7; i++)
    {
        printf("Enter sales on day %d: ", i + 1);
        scanf("%d", &sales[i]);
        total += sales[i];
    }
    printf("Average sales in a week is %d\n", total / 7);
    return 0;
}
