/**
 * C Program to add numbers until user enters Zero
 */

#include <stdio.h>
#include "STD_Types.h"

int main()
{
    s8 L_s8Num1=0;
    s16 L_s16Sum=0;

    do{
        printf("Enter a number: ");
        scanf("%d",&L_s8Num1);

        L_s16Sum+=L_s8Num1;

      }while(L_s8Num1 != NULL);

    printf("Sum= %hd\n\n",L_s16Sum);


    return 0;
}
