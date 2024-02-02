// program to enter element of matrix of size n  and display them using array of array
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    // entering the element of matrix using array of array
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            printf("Enter the element of row %d: ", i + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    // displaying the matrix using array of array 
    printf("The matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
