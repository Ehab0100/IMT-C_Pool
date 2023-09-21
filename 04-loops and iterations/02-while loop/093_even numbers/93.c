/**
 * C program to print all even numbers from 1 to n
 *
 */

#include <stdio.h>
#include "STD_Types.h"

int main()
{
    /* Input upper limit of even number from user */
    u8 L_u8Num;
    printf("Print all even numbers till: ");
    scanf("%d",&L_u8Num);

    printf("Even numbers from 1 to %d are: \n", L_u8Num);

    s8 L_s8Counter=1;
    while(L_s8Counter <= L_u8Num)
    {
        if(L_s8Counter % 2 == 0 )
            printf("%d \n",L_s8Counter);

        L_s8Counter++;
    }
    return 0;
}
