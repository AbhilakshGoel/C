#include<stdio.h>
//#include<conio.h>
int main()
{
int a, b, c, sum;
//clrscr();
printf("Enter the Angles of the Triangle: ");
scanf("%d%d%d", &a, &b, &c);
sum = a+b+c;
if(sum==180)
printf("It is a Valid Triangle");
else
printf("It is Not a Valid Triangle");
//getch();
return 0;
}
