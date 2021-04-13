#include<stdio.h>
//#include<conio.h>
int main()
{
int year, rem;
//clrscr();
printf("Enter a Year: ");
scanf("%d", &yaer);
rem = year%4;
(rem==0?printf("It is a Leap Year"):printf("It is Not a Leap Year"));
//getch();
return 0;
}
