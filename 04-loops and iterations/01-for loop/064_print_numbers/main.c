/**
* C Program to print numbers in matrix
*
*/
#include <stdio.h>

int main()
{
    /* Input rows and columns from user */
    int row,col;
    printf("Enter number of Rows & Columns Respectively: ");
    scanf("%d%d",&row,&col);

    int i,j,k=1;
    /* loop to print rows*/
    for(i=0;i<row;i++)
    {
        /* loop to print columns*/
        for(j=0;j<col;j++,k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }

    return 0;
}

