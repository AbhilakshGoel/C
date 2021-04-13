#include<stdio.h>
//#include<conio.h>
int main()
{
int a, rem, s=0;
//clrscr();
printf("Enter a Five Digit Number: ");
scanf("%d", &a);
rem = a%10;
s = s+rem;
a = a/10;

rem = a%10;
s = s+rem;
a = a/10;

rem = a%10;
s = s+rem;
a = a/10;

rem = a%10;
s = s+rem;
a = a/10;

rem = a%10;
s = s+rem;
printf("The Sum of the Digits of The Number is %d", s);
//getch();
return 0;
}
