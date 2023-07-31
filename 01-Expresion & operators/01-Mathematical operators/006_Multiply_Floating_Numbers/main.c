/**
*Write a C code that will ask the user to enter two values
 (Floating Numbers) and print their Multiply
*/

#include <stdio.h>

int main()
{
    /* declare 2_float numbers and scan them from the user */
    float num1,num2;
    printf("Enter 1st & 2nd Numbers(float) respectively: ");
    scanf("%f%f",&num1,&num2);

    /* calculate the result */
    double result;
    result = num1*num2;

    /* print the result in double_data type */
    printf("Result: %.2f\n",result);

    return 0;
}
