#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Character: ");
    fflush(stdin);
    scanf("%c", &ch);
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("It is a Vowel");
        break;
    default:
        printf("It is a Consonant");
    }
    return 0;
}
