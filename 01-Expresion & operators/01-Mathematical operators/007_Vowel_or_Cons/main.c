/**
* C code To check whether a character is Vowel or Consonant
Hint: The vowel number is (a,e,o,l,u)
*/

#include <stdio.h>

int main()
{
    /* input character from the user */
    unsigned char a;
    printf("Enter an alphabet: ");
    scanf("%c",&a);

    /*check if the character is a Consonant or Vowel*/
    if(a=='a' || a=='e' || a=='o' || a=='i' || a=='u')
        printf("%c is a Small Vowel.\n",a);
    else if(a>'a' && a<='z')
        printf("%c is a Small Consonant.\n",a);
    else if(a=='A' || a=='E' || a=='O' || a=='I' || a=='U')
        printf("%c is a Capital Vowel.\n",a);
    else if(a>'A' && a<='Z')
        printf("%c is a Capital Consonant.\n",a);


    return 0;
}
