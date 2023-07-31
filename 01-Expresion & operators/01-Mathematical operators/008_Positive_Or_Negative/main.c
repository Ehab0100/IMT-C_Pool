/**
 * C code that will ask the user to enter number and
   check this number positive or negative
 */

#include <stdio.h>

int main()
{
    int num;
    printf("Enter anumber: ");
    scanf("%i",&num);

    if(num>0)
        printf("this number %i is a positive number\n",num);
    else if(num<0)
        printf("this number %i is a negative number\n",num);
    else
        printf("this number %i is ZERO\n",num);

    return 0;
}
