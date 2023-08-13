/**
* C program to display the first 10 natural
*   number
*
*/

#include <stdio.h>

int main()
{
    int i;
	/* inputs 10 numbers from user*/
	printf("The first 10 natural numbers are:\n");
	/*loop to take 10 numbers from user*/
	for (i=1;i<=10;i++)
	{      /* print number */
		printf("%d ",i);
	}
    printf("\n");

    return 0;
}

