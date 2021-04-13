#include<stdio.h>
//#include<conio.h>
int main()
{
int a, b, t;
//clrscr();
printf("Enter the Value of A and B: ");
scanf("%d%d", &a, &b);
t=a;
a=b;
b=t;
printf("The Value of A is %d,\nThe Value of B is %d",a,b);
//getch();
return 0;
}
