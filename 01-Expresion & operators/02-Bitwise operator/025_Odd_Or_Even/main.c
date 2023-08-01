/**
 * C program to check even or odd number using bitwise operator
 */

#include <stdio.h>

int main()
{
    /* Input number from user */
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    /*check even or odd number using bitwise operator*/
    if(num&1)
        printf("Number %d is Odd.\n\n",num);
    else
        printf("Number %d is Even.\n\n",num);


    return 0;
}
