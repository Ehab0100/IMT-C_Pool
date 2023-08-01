/**
 * C program to rotate right or left bits of a number.
 */

#include <stdio.h>
#include <string.h>
#include "STD_macros.h"

int main()
{
    /* Input data from user */
    unsigned char num,rotated_num,bits,str[6];
    printf("Enter a number: ");
    scanf("%i",&num);
    printf("Enter number of rotation: ");
    scanf("%i",&bits);
    printf("Right or left rotation(Enter:right or left): ");
    fflush(stdin);
    gets(str);

    rotated_num=num;

    if(strcmp(str,"right")==0)
        ROR(rotated_num,bits);
    else if ((strcmp(str,"left")==0))
        ROL(rotated_num,bits);

        /* Print rotated number */
    printf("%i %s rotated %i times = %i \n\n",num,str,bits,rotated_num);

    return 0;
}
