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
    
    while(L_u32Num2 != 0)
    {
        L_u8Digit = L_u32Num2%10;
        L_u32Num2 = L_u32Num2/10;
        
        switch(L_u8Digit)
        {
            case 0: printf("Zero ");  break;
            case 1: printf("one ");   break;
            case 2: printf("two ");   break;
            case 3: printf("three "); break;
            case 4: printf("four ");  break;
            case 5: printf("five ");  break;
            case 6: printf("six ");   break;
            case 7: printf("seven "); break;
            case 8: printf("eight "); break;
            case 9: printf("nine ");  break;
        }
    }
    printf("\n");


    return 0;
}
