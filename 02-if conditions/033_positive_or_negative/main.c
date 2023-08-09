/**
*C program to take a character from user then check whether
*         Character Vowel or consonant.
*/

#include <stdio.h>

int main()
{
    /* Input number from user */
    int num;
    printf("Enter any Character: ");
    scanf("%d",&num);

    /* make Check of This Number */
    if(num>0)
        printf("You entered a Positive number \n\n");
    else if(num<0)
        printf("You entered a Negative number \n\n");
    else
        printf("You entered Zero \n\n");

    return 0;
}
