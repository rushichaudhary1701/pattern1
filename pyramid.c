#include <stdio.h>
#include <conio.h>

int main ()
{
    int i,j,k;

    for(i=0;i<10;i++)
    {
        for(k=0;k<9-i;k++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf(" *");
    
        }

        printf("\n");
    }

    return 0;

}