/**
 *   C Program to Count Number of Digits in an Integer
 */

#include <stdio.h>
#include "STD_Types.h"

int main()
{
    u32 L_u32Num1=0;
    u8 L_u8Digit=0;
    
    printf("Enter a Number: ");
    scanf("%d",&L_u32Num1);
    
    while(L_u32Num1 != 0)
    {
        L_u32Num1 = L_u32Num1/10;
        L_u8Digit++;
    }
    

    printf("Number of Digits: %d",L_u8Digit);


    return 0;
}
