/**
 * C program to check whether a triangle is Equilateral, Isosceles or Scalene
 */

#include <stdio.h>
int main()
{
    /* Input the three angles of a triangle from user */
    int angle_1,angle_2,angle_3,total;
    printf("Enter the three angles of a triangle: ");
    scanf("%d%d%d",&angle_1,&angle_2,&angle_3);

    /* Calculate total sum of angles */
    total=angle_1+angle_2+angle_3;

    /*
     * If sum of angles is 180 and
     * angle1, angle2, angle3 is not 0 then
     * triangle is valid.
     */
    if(total==180 && angle_1 !=0 && angle_2 !=0 && angle_3 !=0)
        {
                /* If all sides are equal */
            if(angle_1==angle_2 && angle_1==angle_3)
                printf("Equilateral Triangle\n\n");
                /* If any two sides are equal */
            else if(angle_1==angle_2 || angle_1==angle_3 || angle_2==angle_3)
                printf("Isosceles Triangle\n\n");
                /* If none sides are equal */
            else
                printf("Scalene Triangle\n\n");
        }
    else
        printf("Not Triangle\n\n");

    return 0;
}
