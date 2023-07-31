/**
* C program to find the eligibility of admission for
  a professional course based on the following criteria:
  Marks in Maths >=65
  Marks in Phy >=55
  Marks in Chem>=50
  Total in all three subject >=180
  Or
  Total in Math and phy >=140
*/

#include <stdio.h>

int main()
{
    /* input the degree of the 3_subjects from the user */
    int math,chem,phy;
    printf("Enter the degree of maths course: ");
    scanf("%i",&math);
    printf("Enter the degree of chemistry course: ");
    scanf("%i",&chem);
    printf("Enter the degree of physics course: ");
    scanf("%i",&phy);

    /*check the eligiblity of the candidate */
    if(((math+chem+phy)>=180)||((math+phy)>=140))
    {
        Printf("this candidate is eligible for admission\n");
    }
    else
    {
        Printf("the candidate isn't eligible for admission\n");
    }

    return 0;
}
