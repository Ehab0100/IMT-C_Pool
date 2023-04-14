/**
*c code that will ask the user to enter two values and print
 their division and reminder
*/

#include <stdio.h>

int main()
{
    /* declare 2_int variables & scan them from user */
    int a,b;
    printf("Enter 2_Numbers: ");
    scanf("%i%i",&a,&b);

    if (0 != b)
    {
        /* print the Devision & Reminder of the 2_numbers */
        printf("Devision: %.2f\nReminder: %i\n",(float)a/b,a%b);
    }
    else
        printf("Can't devide by zero\n");

    return 0;
}
