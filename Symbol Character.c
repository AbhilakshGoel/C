#include<stdio.h>
//#include<conio.h>
int main()
{
char a;
//clrscr();
printf("Enter a Character: ");
fflush(stdin);
scanf("%c", &a);
((a>=65 && a<=90)||(a>=97 && a<=122)||(a>=48 && a<=57)?printf("It is Not a Special Symbol"):printf("It is a Special Symbol"));
//getch();
return 0;
}
