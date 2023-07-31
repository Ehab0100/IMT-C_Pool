/**
 * C program to find highest order set bit in a number
 */

#include <stdio.h>
#define NUM_SIZE ((sizeof(num)*8)-1)  /* number size in bits */

int main()
{
    /* Input number from user */
    int num, nth_bit;
    printf("Enter a number: ");
    scanf("%i",&num);

    if(num==0)
        {
            printf("Zero has no set bit\n\n");
        }
    else
        {
            int i;
            /* Iterate over bits of integer */
            for(i=NUM_SIZE;i>=0;i--)
            {
                nth_bit= num&(1<<i);
                /* If current bit is set */
               if(nth_bit)
                   {
                      printf("highest order set bit in %i is bit number %i\n\n",num,i);
                      /* Terminate the loop */
                      break;
                   }
            }

        }
    return 0;
}
