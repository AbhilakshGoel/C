#include<stdio.h>
//#include<conio.h>
int main()
{
int a,b,c;
//clrscr();
printf("Enter the No whose Table you want: ");
scanf("%d", &a);
b = 1;
while(b<=10)
{
c = a*b;
printf("%d * %d = %d\n", a, b, c);
b++;
}
//getch();
return 0;
}
