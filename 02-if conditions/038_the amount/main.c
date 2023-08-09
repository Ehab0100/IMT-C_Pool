/**
*  C program to input amount from user and print minimum
*  number of notes (Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for
*  the amount
*
*/

#include <stdio.h>
int main()
{
    /* Input year from user */
    int amount;
    printf("Enter amount: ");
    scanf("%d",&amount);

    int unit_500,unit_100,unit_50,unit_20,unit_10,unit_5,unit_2,unit_1;

    unit_500=amount/500;
    amount%=500;

    unit_100=amount/100;
    amount%=100;

    unit_50=amount/50;
    amount%=50;

    unit_20=amount/20;
    amount%=20;

    unit_10=amount/10;
    amount%=10;

    unit_5=amount/5;
    amount%=5;

    unit_2=amount/2;
    amount%=2;

    unit_1=amount/1;

    printf("500 = %d\n100 = %d\n50 = %d\n20 = %d\n10 = %d\n5 = %d\n2 = %d\n1 = %d\n"
           ,unit_500,unit_100,unit_50,unit_20,unit_10,unit_5,unit_2,unit_1);



    return 0;
}
