/**
* C program to display the multiplication table of a given integer
*
*/
#include <stdio.h>

int main()
{
    /* input number from user */
    int num,multiply;
    printf("Input the number (Table to be calculated): ");
    scanf("%d",&num);

    int i;
	for (i=1;i<=12;i++)
	{
	    multiply=num*i;
	    /* print Table */
	    printf("%d x %d = %d\n",num,i,multiply);
	}

    return 0;
}

