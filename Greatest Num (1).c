#include<stdio.h>
//#include<conio.h>
int main()
{
long int a,b,c;
//clrscr();
printf("Enter Three Numbers: ");
scanf("%ld%ld%ld", &a, &b, &c);
if(a>b)
{
if(a>c)
printf("\n%ld is the Greatest Number", a);
else
printf("\n%ld is the Greatest Number", c);
}
else
{
if(b>c)
printf("\n%ld is the Greatest Number", b);
else
printf("\n%ld is the Greatest Number", c);
}
//getch();
return 0;
}
