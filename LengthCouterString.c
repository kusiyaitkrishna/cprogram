// c program to count number of character entered by user without function

#include <stdio.h>
int main()
{
    int count = 0;
    char ch;
    printf("Enter the character: ");
    // counting the number of character entered by the user
    while (ch != '\n')
    {
        ch = getchar();
        count++;
    }
    printf("The number of character entered is: %d\n", count - 1);
    return 0;
}
