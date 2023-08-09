/**
*C program to take a character from user then check whether
*      Character Vowel or consonant.
*/

#include <stdio.h>

int main()
{
    /* Input character from user */
    char character;
    printf("Enter any Character: ");
    scanf("%c",&character);

    /* check on the character is Capital or small && vowel or constant */
    if(character=='a'||character=='e'||character=='i'||character=='o'||character=='u')
        printf("This Character %c is small Vowel\n\n",character);
    else if(character=='A'||character=='E'||character=='I'||character=='O'||character=='U')
        printf("This Character %c is Capital Vowel\n\n",character);
    else if(character>'a'&&character<='z')
        printf("This Character %c is Small Consonant\n\n",character);
    else if(character>'A'&&character<='Z')
        printf("This Character %c is Capital Consonant\n\n",character);


    return 0;
}
