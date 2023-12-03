#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("COMPARING THREE NUMBERS\n");  
    int x,y,z;

    printf("Please enter a number for X:\n");
    scanf("%d",&x);
    printf("Please enter a number for Y:\n");
    scanf("%d",&y);
    printf("Please enter a number for Z:\n");
    scanf("%d",&z);



    if (x>=y && x>=z)
    {
        if (x>y && x>z)
        {
            if (y==z && x>z)
            {
                printf("Y and Z are equal and X is greater than both.");
            }
            else
            {
                printf("X is the largest.");
            }

        }
        else if (x==y && x==z)
        {
            printf("X, Y and Z are equal.");
        }
        else if (x==y && x>z)
        {
            printf("X and Y are equal and both are greater than Z.");
        }
        else if (x==z && x>y)
        {
            printf("X and Z are equal and both are greater than Y.");
        }

    }

    if (y>=x && y>=z)
    {
        if (y>x && y>z)
        {
            if (x==z && y>z)
            {
                printf("X and Z are equal and Y is greater than both.");
            }
            else
            {
                printf("Y is the largest.");
            }
        }
        else if (y==z && y>x)
        {
            printf("Y and Z are equal and both are greater than X.");
        }
    }
    if (z>=x && z>=y)
    {
        if (z>x && z>y)
        {
            if (x==y && z>y)
            {
                printf("X and Y are equal and Z is greater than both.");
            }
            else
            {
                printf("Z is the largest.");
            }
        }

    }

    return 0;

}
