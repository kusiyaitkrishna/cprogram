#include <conio.h>
#include <stdio.h>
/*
ALL CREDIT GOES TOWARDS THE KUSIYAIT KRISHNA 
WHO HAVE WRITTEN ALL PROGRAM IN FUNCTION BASED FOR 
MORE CONVENIENCE IF YOU WANT TO KNOW MORE ,
visit krishnakusiyait.com.np


*/
void pattern()
{
    // Program to show this pattern
    /*
    1
    12
    123
    1234
    12345
    */
    for (int p = 1; p <= 5; p++)
    {
        for (int r = 1; r <= 5; r++)
        {
            // Condition for displaying pattern
            if (r <= p)
            {
                printf("%d", r);
            }
        }
        printf("\n");
    }
}

void pattern2()
{
    // This function print  following pattern
    /*
    5
   45
  345
 2345
12345
    */
    for (int p = 1; p <= 5; p++)
    {
        for (int r = 1; r <= 5; r++)
        {
            // Condition for displaying following pattern
            if (r >= 6 - p)
            {
                printf("%d", r);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void pattern3()
{
    // This function print  following pattern
    /*
    1
   12
  123
 1234
12345
    */
    for (int p = 1; p <= 5; p++)
    {
        int i = 1;
        for (int r = 1; r <= 5; r++)
        {

            // Condition for displaying following pattern
            if (r >= 6 - p)
            {
                printf("%d", i);
                i = i + 1;
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}

void pattern4()
{
    // This function print  following pattern
    /*
     12345
     1234
     123
     12
     1
    */
    for (int p = 1; p <= 5; p++)
    {
        int i = 1;
        for (int r = 1; r <= 5; r++)
        {

            // Condition for displaying following pattern
            if (r <= 6 - p)
            {
                printf("%d", i);
                i = i + 1;
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}

void pattern5()
{
    // This function print  following pattern
    /*

12345
 2345
  345
   45
    5
    */
    for (int p = 1; p <= 5; p++)
    {

        for (int r = 1; r <= 5; r++)
        {

            // Condition for displaying following pattern
            if ((r >= p) && (r <= 5))
            {
                printf("%d", r);
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}
void pattern6()
{
    // This function print  following pattern
    /*

    5
   456
  34567
 2345678
123456789
    */
    for (int p = 1; p <= 5; p++)
    {

        for (int r = 1; r <= 9; r++)
        {

            // Condition for displaying following pattern
            if ((r >= 6 - p) && (r <= 4 + p))
            {
                printf("%d", r);
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}

void pattern7()
{
    // This function print  following pattern
    /*
    5
   4 6
  3 5 7
 2 4 6 8
1 3 5 7 9

   */
    for (int p = 1; p <= 5; p++)
    {
        int k = 1;
        for (int r = 1; r <= 9; r++)
        {

            // Condition for displaying following pattern
            if ((r >= 6 - p) && (r <= 4 + p) && (k == 1))
            {
                printf("%d", r);
                k = 0;
            }
            else
            {
                printf(" ");
                k = 1;
            }
        }

        printf("\n");
    }
}

void pattern8()
{
    // This function print  following pattern
    /*
123456789
1234 6789
123   789
12     89
1       9

   */
    for (int p = 1; p <= 5; p++)
    {
        int k = 1;
        for (int r = 1; r <= 9; r++)
        {

            // Condition for displaying following pattern
            if ((r <= 6 - p) || (r >= 4 + p))
            {
                printf("%d", r);
                k = 0;
            }
            else
            {
                printf(" ");
                k = 1;
            }
        }

        printf("\n");
    }
}
void pattern9()
{
    // This function print  following pattern
    /*
    1
   121
  12321
 1234321
123454321

   */
    for (int p = 1; p <= 5; p++)
    {
        int k = 1;
        for (int r = 1; r <= 9; r++)
        {

            // Condition for displaying following pattern
            if ((r >= 6 - p) && (r <= 4 + p))
            {
                printf("%d", k);

                if (r < 5)
                {
                    k = k + 1;
                }
                else
                {
                    k = k - 1;
                }
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}

// From here main function starts
int main()
{
    pattern();
    pattern2();
    pattern3();
    pattern4();
    pattern5();
    pattern6();
    pattern7();
    pattern8();
    pattern9();
    return 0;
}
