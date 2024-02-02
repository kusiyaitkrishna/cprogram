//c program to find largest and smallest number in array without function
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
    int max = arr[0];
    int min = arr[0];
    // performing the operation to find the largest and smallest number in the array 
    for (int i = 0; i < n; i++)
    {
        // if the current element is greater than the max then the max will be the current element
        if (arr[i] > max)
        {
            max = arr[i];
        }
        // if the current element is smaller than the min then the min will be the current element
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("The largest number is %d\n", max);
    printf("The smallest number is %d\n", min);
    return 0;
}
