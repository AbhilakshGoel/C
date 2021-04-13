#include<stdio.h>
//#include<conio.h>
int main()
{
int a, b, c;
//clrscr();
printf("Enter Three Numbers: ");
scanf("%d%d%d", &a, &b, &c);
if(a>b && a>c)
printf("%d is the Greatest No.", a);
else
if(b>c)
printf("%d is the Greatest No.", b);
else
printf("%d is the Greatest No.", c);
//getch();
return 0;
}
