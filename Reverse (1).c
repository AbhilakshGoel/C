#include<stdio.h>
//#include<conio.h>
int main()
{
long int a, rem, r=0;
//clrscr();
printf("Enter a Five Digit Number: ");
scanf("%ld", &a);
rem = a%10;
r = (r*10)+rem;
a = a/10;

rem = a%10;
r = (r*10)+rem;
a = a/10;

rem = a%10;
r = (r*10)+rem;
a = a/10;

rem = a%10;
r = (r*10)+rem;
a = a/10;

rem = a%10;
r = (r*10)+rem;
printf("The Reverse of The Number is %ld", r);
//getch();
return 0;
}
