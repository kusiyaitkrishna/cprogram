//c program to sort name of 10 employee in alphabetical order
#include <stdio.h>
#include <string.h>
int main()
{
    char name[10][100], temp[100];
    printf("Enter the name of 10 employee:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the name of %d employee:\n", i + 1);
        scanf("%s", name[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("The name of 10 employee in alphabetical order is:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", name[i]);
    }
    return 0;
}
