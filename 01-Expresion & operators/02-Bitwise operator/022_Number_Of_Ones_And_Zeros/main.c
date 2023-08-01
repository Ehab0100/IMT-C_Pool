/**
 * C program to count total of zeros and ones in a binary number using bitwise operator
 */

#include <stdio.h>
#define NUM_SIZE ((sizeof(num)*8)-1)  /* number size in bits */

int main()
{
    /* Input number from user */
    int num,ones=0;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num==0)
        {
            printf("number of zeros & ones Respectively are %d , %d \n\n",32,0);
        }
    else
        {
            int i,nth_bit;
            /* Iterate over bits of integer */
            for(i=NUM_SIZE;i>=0;i--)
            {
                nth_bit= num&(1<<i);
                /* If current bit is set */
               if(nth_bit)
                   ones++;
            }
            printf("number of zeros & ones Respectively are %d , %d \n\n",NUM_SIZE+1-ones,ones);
        }
    return 0;
}
