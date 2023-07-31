/**
*c code that will ask the user to enter a character
 then print it and find ASCII value of this character then print it
*/

#include <stdio.h>

int main()
{
    /* declare the character & scan it from the user*/
    unsigned char a;
    printf("Enter a character: ");
    scanf("%c",&a);

    /* print the ASCII value of the character
    %d displays the integer value of a character
    %c displays the actual character
    */
    printf("ASCII value of %c is %i \n",a,a);

    return 0;
}
