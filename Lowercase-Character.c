#include<stdio.h>
//#include<conio.h>
int main()
{
char a;
//clrscr();
printf("Enter a Character: ");
fflush(stdin);
scanf("%c", &a);
(a>=97 && a<=122?printf("It is a Lowercase Letter"):printf("It is not a Lowercase Letter"));
//getch();
return 0;
}
