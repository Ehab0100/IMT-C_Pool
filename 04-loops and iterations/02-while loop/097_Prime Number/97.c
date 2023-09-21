/**
*  C program that takes input and prints this number is prime or not using while loop
*/

#include <stdio.h>
#include "STD_Types.h"

int main()
{

    u8 L_u8Num,i;
    printf("Enter a Number: ");
    scanf("%d",&L_u8Num);

    if(L_u8Num==0 || L_u8Num==1)
        {
            printf("NOT a prime Number\n\n");
        }

    i=2;

    while(i<=L_u8Num)
    {
        if(L_u8Num==i)
        {
            printf("prime Number\n\n");
            break;
        }
        else if((L_u8Num%i)==0)
        {
            printf("NOT a prime Number\n\n");
            break;
        }

        i++;
    }

    return 0;
}
