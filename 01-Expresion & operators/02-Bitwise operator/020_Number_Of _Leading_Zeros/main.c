/**
 * C program to count leading zeros in a binary number using bitwise operator
 */

#include <stdio.h>
#define NUM_SIZE ((sizeof(num)*8)-1)  /* number size in bits */

int main()
{
    /* Input number from user */
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num==0)
        {
            printf("Total number of leading zeros in %d is %d \n\n",num,32);
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
                   {
                      /* Terminate the loop */
                      break;
                   }
                else
                   {
                      count++;
                   }
            }
            printf("Total number of leading zeros in %d is %d \n\n",num,count);
        }
    return 0;
}
