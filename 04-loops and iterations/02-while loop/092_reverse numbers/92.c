/**
* C program to print all natural numbers in reverse from n to 1
*
*/
#include <stdio.h>
#include "STD_Types.h"

int main()
{
    //Input start range from user
    u8 L_u8Num;
    printf("Enter a Number: ");
    scanf("%d",&L_u8Num);

    s8 L_s8Counter=0;
    while(L_s8Counter != L_u8Num)
    {
       printf("%d \n",L_u8Num-L_s8Counter++);
    }
    return 0;
}
