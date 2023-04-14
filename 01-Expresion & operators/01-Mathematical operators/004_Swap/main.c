/**
*c code that will ask the user to enter two values
 and swap then print it
*/

#include <stdio.h>

int main()
{
    /* declare 2_int numbers and scan them from the user */
    int a,b;
    printf("Enter 1st & 2nd Numbers respectively: ");
    scanf("%i%i",&a,&b);

    /* swaping the numbers by 2_different methods */
    // 1st method (without using third variable)
    a=a+b;
    b=a-b;
    a=a-b;
    //2nd method
    /*
    int temp;
    temp=a;
    a=b;
    b=temp;
    */

    /* print the numbers after swaping */
    printf("......After swaping......\n");
    printf("1st num: %i\n2nd num: %i\n",a,b);

    return 0;
}
