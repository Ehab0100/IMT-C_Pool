/**
* C program using a cast to evaluate the sigma equation
*
*/
#include <stdio.h>

int main()
{
    /* input number from user */
    int n;
    float sum=0;
    printf("Input value of n: ");
    scanf("%d",&n);

    int i;
	for (i=1;i<=n;i++)
	{
	    sum+=1/(float)i;
	}
	printf("sum = %.3f\n",sum);

    return 0;
}

