/**
* C Program to Find the sum of series 1+1/2+1/3+1/4………+1/n
*
*/
#include <stdio.h>

int main()
{
    /* input number from user */
    int n;
    float sum=1;
    printf("Input value of n: ");
    scanf("%d",&n);

    int i;
	for (i=1;i<=n;i++)
	{
	    if(i==1)
           printf("1");
        else
        {
            printf("+1/%d",i);
	        sum+=1/(float)i;
        }
	}
	printf("\nsum = %.3f\n",sum);

    return 0;
}

