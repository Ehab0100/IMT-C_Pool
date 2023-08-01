/**
 * C program to find maximum between two numbers using conditional operator
 */

#include <stdio.h>

int main()
{
    /*Input two number from user*/
    int num1,num2,max;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);

    /*
     * If num1 > num2 then
     *     assign num1 to max
     * else
     *     assign num2 to max
     */
    max=(num1 > num2) ? num1 : num2;

    printf("Maximum brtween %d & %d is %d\n\n",num1,num2,max);

    return 0;
}
