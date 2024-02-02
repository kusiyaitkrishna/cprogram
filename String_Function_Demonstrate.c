// program to demonstrate different string handling function
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    printf("The length of the first string is: %ld\n", strlen(str1));
    printf("The length of the second string is: %ld\n", strlen(str2));
    printf("The concatenation of the two string is: %s\n", strcat(str1, str2));
    printf("The comparison of the two string is: %d\n", strcmp(str1, str2));
    printf("The copy of the first string is: %s\n", strcpy(str1, str2));
    return 0;
}
