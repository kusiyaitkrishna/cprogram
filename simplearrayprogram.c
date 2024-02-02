// C program with array to input age of four people and display them
#include <stdio.h>
int main()
{
    int age[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter age of person %d: ", i + 1);
        scanf("%d", &age[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("Age of person %d is %d\n", i + 1, age[i]);
    }
    return 0;
}
