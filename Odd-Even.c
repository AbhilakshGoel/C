#include<stdio.h>
/*#include<conio.h>*/
int main()
{
long int n,rem;
/*clrscr();*/
printf("Enter a Number: ");
scanf("%ld", &n);
rem = n%2;
if(rem==0)
printf("It is an Even Number");
else
printf("It is a Odd Number");
//getch();
return 0;
}
