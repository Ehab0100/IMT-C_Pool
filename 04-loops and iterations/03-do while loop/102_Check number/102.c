/**
 * C Program to  read an integer number and check whether entered number is Positive,
 *       Negative or Zero until user does want to exit.
 */

#include <stdio.h>
#include "STD_Types.h"

int main()
{
    s8 L_s8Num1=0;
    u8 L_u32Char;

    do{
        printf("Enter a number: ");
        scanf("%d",&L_s8Num1);

        if(L_s8Num1 > 0)
            printf("You Entered a positive number\n\n");
        else if(L_s8Num1 == 0)
            printf("You Entered Zero\n\n");
        else
            printf("You Entered a negative number\n\n");

        printf("To continue press(c)\n");
        printf("To Exit press(e):");
        fflush(stdin);
        scanf("%c",&L_u32Char);
        printf("\n");

      }while(L_u32Char == 'c');

    return 0;
}
