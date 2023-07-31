/**
*C code that will ask the user to enter four values a,b,c and d
then evaluates the ratio of (a + b) to (c-d) and prints the result,
 if (c-d) is not equal zero
*/

/* Include stdio.h library To use printf and scanf function */
#include <stdio.h>

int main()
{
    /* declare 4 int_variables */
    int a,b,c,d;
    float ratio;
    /* scan the values from the users*/
    printf("Enter 4 values a,b,c and d respectively: ");
    scanf("%i%i%i%i",&a,&b,&c,&d);

    /* check that (c-d:denumerator != 0) */
    if(0 != c-d)
    {
        /* calculate the ratio*/
       ratio=(float)(a+b)/(c-d);
       /* print the ratio*/
       printf("Ratio = %.2f\n",ratio);
    }
    else
    printf("Can't divide by zero\n");

    return 0;
}
