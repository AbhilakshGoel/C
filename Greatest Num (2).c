#include<stdio.h>
//#include<conio.h>
int main()
{
int a,b,c,d;
//clrscr();
printf("Enter Three Numbers: ");
scanf("%d%d%d", &a, &b, &c);
d = (a>b && a>c?a:(b>c?b:c));
printf("%d is the Greatest Number", d);
//getch();
return 0;
}
