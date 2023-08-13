/**
*  C Program to Display Factors of a Number
*
*/
#include <stdio.h>

int main()
{
    /* input number from user */
    int num,factor;
    printf("Input a numbers: ");
    scanf("%d",&num);

    int i;
    printf("Factors of %d are: ",num);
	for (i=1;i<=num;i++)
	{
	    if(num%i==0)
            printf("%d ",i);
	}
	printf("\n\n");

    return 0;
}

