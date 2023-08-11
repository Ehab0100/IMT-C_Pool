/**
 * C program to check Even or Odd number using switch case
 */

#include <stdio.h>

int main()
{
    /* Input a number from user */
    int num;
    printf("Enter a numbers: ");
    scanf("%d",&num);

    /* Expression (num%2) will return either 0 or 1 */
    switch(num%2)
    {
        /* If condition (num%2)==0 */
        case 0:
            printf("Number %d is Even\n\n",num);
            break;

        /* If condition (num%2)==1 */
        case 1:
            printf("Number %d is Odd\n\n",num);
    }

    return 0;
}
