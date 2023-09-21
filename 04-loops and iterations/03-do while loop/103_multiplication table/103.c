/**
 * C Program to print multiplication table from 1*1 to 10*12.
 */

#include <stdio.h>
#include "STD_Types.h"

int main()
{
    u8 i,j;

    printf("MULTIPLICATION TABLE\n");
    printf("--------------------\n");

    for(i=1;i<=12;i++)
    {
        for(j=1;j<=10;j++)
        {
           printf("%3d ",j*i);
        }
        printf("\n");
    }


    return 0;
}
