/**
* C program to find the sum of first 10 natural number
*
*/

#include <stdio.h>

int main()
{
    int i,sum=0;
	/* inputs 10 numbers from user*/
	printf("The first 10 natural numbers are:\n");

	for (i=1;i<=10;i++)
	{
	    /* calculate the sum of numbers */
	    sum+=i;
        /* print numbers */
		printf("%d ",i);
	}

    printf("\n");
    /* print the sum */
    printf("sum= %d\n\n",sum);



    return 0;
}

