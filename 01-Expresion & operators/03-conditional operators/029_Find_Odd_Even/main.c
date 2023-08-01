/**
 * C program to check even or odd number using conditional operator
 */


#include <stdio.h>

int main()
{
    /*Input a number from user*/
    int num;
    printf("Enter a numbers: ");
    scanf("%d",&num);

    /*
     * If num&1==1 or num%2==0 then
     *     print it is even
     * else
     *     print it is odd
     */
    (num&1)
        ? printf("This number %d is Odd\n\n",num)
        : printf("This number %d is Even\n\n",num);

    return 0;
}
