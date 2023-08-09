/**
* Write C program to check Leap Year or not
*
*/

#include <stdio.h>
int main()
{
    /* Input year from user */
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);


    /*
     * If year is exactly divisible by 4  and year is not divisible by 100
     * or year is exactly divisible by 400 then
     * the year is leap year.
     * Else year is normal year
     */
    if(year%4==0 && year%100!=0 || year%400==0)
        printf("It's a Leap year \n\n");
    else
        printf("It's NOT Leap year \n\n");

    return 0;
}
