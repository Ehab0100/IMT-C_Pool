/**
 * C program to input any number from user and toggle nth bit
       of the given number using bitwise operator
 */

#include <stdio.h>

int main()
{
    /* Input number from user */
    int num,new_num,n;
    printf("Enter a number: ");
    scanf("%i",&num);

    /* Input bit position you want to toggle */
    printf("Enter nth bit to clear(0-31): ");
    scanf("%i",&n);

    new_num =num ^ (1<<n);

    printf("Bit is toggled successfully\n");
    printf("number before toggle bit %i : %i\n",n,num);
    printf("number after toggle bit %i : %i\n",n,new_num);

    return 0;
}
