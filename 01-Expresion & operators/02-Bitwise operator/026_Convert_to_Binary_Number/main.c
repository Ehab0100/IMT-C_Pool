/**
 * C program to convert decimal to binary number without leading zeros with functions
 */


#include <stdio.h>
/* macro to read a specific bit */
#define READ_BIT(reg,bit)  ((reg&(1u<<bit))>>bit)
/* number size in bits */
#define INT_SIZE (sizeof(int)*8)

/**
 * Decimal_to_Binary:  Function to convert decimal to binary number & store it in array
 *
 * @num:   decimal number to be converted into binary.
 * @binary_num:  pointer to array of char to store binary number.
 */

void Decimal_to_Binary(int num,char*binary_num)
{
    char i;

    for(i=INT_SIZE-1;i>=0;i--)
    {
        /* read bit by bit and store it in array */
       binary_num[i]=READ_BIT(num,i);
    }
}

/**
 * print_binary_num:  Function to print binary number without leading zeros.
 *
 * @binary_num:  pointer to array of char which carrying binary number to be printed.
 */

void print_binary_num(char*binary_num)
{
    printf("Equivalent Binary Number: ");

    char i,j;

    for(i=INT_SIZE-1;i>=0;i--)
    {
        /* check if leading zeros has been ended */
        if(binary_num[i])
        {
            for(j=i;j>=0;j--)
            {
                /* print binary number bit by bit */
                printf("%d",binary_num[j]);
            }
             printf("\n\n");
            break;
        }
    }
}



int main()
{
   /* Input number from user */
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    /*create array of char to store binary number*/
    char binary_num[INT_SIZE];

    /*convert decimal to binary number*/
    Decimal_to_Binary(num,binary_num);

    /*print binary number*/
    print_binary_num(binary_num);

    return 0;
}

