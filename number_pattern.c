#include <stdio.h>
#include <conio.h>

int main ()
{
    int i,j,k;

    for(i=1;i<10;i++)
    {
        for(k=1;k<9-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" %d",i);
    
        }

        printf("\n");
    }

    return 0;

}