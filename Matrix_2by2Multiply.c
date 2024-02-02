// c program to find multiplication of 2 by 2 matrix using array of array

#include <stdio.h>
int main()
{
    int n = 2;
    int matrix1[n][n];
    int matrix2[n][n];
    int matrix3[n][n];
    // entering the element of first matrix using array of array
    printf("Enter the element of first matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the element of row %d x %d: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    // entering the element of second matrix using array of array
    printf("Enter the element of second matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the element of row %d x %d: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    // displaying the first and second matrix using array of array
    printf("The first matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }
    // displaying the first and second matrix using array of array
    printf("The second matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    // performing the operation to find the multiplication of the matrix
    printf("The multiplication of the matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix3[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                // multiplying the element of the first matrix with the element of the second matrix and adding them
                // to the element of the third matrix 
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            printf("%d\t", matrix3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
