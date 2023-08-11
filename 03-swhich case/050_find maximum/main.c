/**
 * C program to find maximum between two numbers using switch case
 */

#include <stdio.h>

int main()
{
    /* Input two numbers from user */
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);

    /* Expression (num1 > num2) will return either 0 or 1 */
    switch((num1>num2)*1+(num1<num2)*2)
    {
        /* If condition (num1>num2) is true */
        case 1:
            printf("%d is maximum\n\n",num1);
            break;

        /* If condition (num1<num2) is true */
        case 2:
            printf("%d is maximum\n\n",num2);
            break;

        default:
            printf("The two numbers are equal\n\n");
    }

    return 0;
}
