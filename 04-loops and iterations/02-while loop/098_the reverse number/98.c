/**
 *  C program to input a number from user and print it into words.
 */

#include <stdio.h>
#include "STD_Types.h"

int main()
{
    u32 L_u32Num1=0,L_u32Num2=0;
    u8 L_u8Digit=0;
    
    printf("Enter a Number: ");
    scanf("%d",&L_u32Num1);

    // Store reverse of L_u32Num1 in L_u32Num2
    
    while(L_u32Num1 != 0)
    {
        L_u32Num2 = L_u32Num2*10 + L_u32Num1%10;
        L_u32Num1 = L_u32Num1/10;
    }
    

    printf("The reverse number: %d",L_u32Num2);


    return 0;
}
