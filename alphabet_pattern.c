#include <stdio.h>
#include <conio.h>

int main()
{

int i,j,k;
 
for(i=65;i<74;i++)
{

    for(k=1;k<74-i;k++)
    {

        printf(" ");
    }

    for(j=65;j<=i;j++)
    {

        printf(" %c",i);
    }

    printf("\n");

    
}
return 0;
}