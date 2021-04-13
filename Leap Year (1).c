#include<stdio.h>
//#include<conio.h>
int main()
{
int year, rem;
//clrscr();
printf("Enter a Year: ");
scanf("%d", &year);
rem = year%4;
if(rem==0)
printf("It is a Leap Year");
else
printf("It is not a Leap Year");
//getch();
return 0;
}
