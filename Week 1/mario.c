#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while( height<=0 );

    for ( int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= height; j++)
        {
            if (j < ( height - i + 1 ))
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
