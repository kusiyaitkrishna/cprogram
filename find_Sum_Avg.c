//c program to enter integer from user and find their sum and average using array
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of value you want: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("The sum of the integer is %d\n", sum);
    printf("The average of the integer is %f\n", (float)sum / n);
    return 0;
}
