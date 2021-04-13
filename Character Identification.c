#include<stdio.h>
//#include<conio.h>
int main()
{
char ch;
//clrscr();
printf("Enter the Character: ");
fflush(stdin);
scanf("%c", &ch);
if(ch>=65 && ch<=90)
printf("It is a Capital Letter");
else
if(ch>=97 && ch<=122)
printf("It is a Small Letter");
else
if(ch>=48 && ch<=57)
printf("It is a Digit");
else
printf("It is a Special Symbol");
//getch();
return 0;
}
