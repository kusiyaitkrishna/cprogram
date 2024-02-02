//c program to read string and display ascii value of each character in s string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("The ascii value of %c is %d\n", str[i], str[i]);
    }
    return 0;
}
