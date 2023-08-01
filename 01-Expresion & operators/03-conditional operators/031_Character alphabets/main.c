/**
 * C program to check alphabets using Conditional operator
 */


#include <stdio.h>

int main()
{
    /*Input a character from user*/
    char character;
    printf("Enter a character: ");
    scanf("%c",&character);

    /*
     * If (ch>'a' and ch<'z') or (ch>'A' and ch<'Z') then
     *     print capital or small alphabet
     * else
     *     print not alphabet
     */
    (character>='A' && character<='Z')
        ? printf("This character %c is Capitl Alphabet\n\n",character)
        : (character>='a' && character<='z')
        ? printf("This character %c is Small Alphabet\n\n",character)
        : printf("This %c isn't Alphabet\n\n",character);

    return 0;
}
