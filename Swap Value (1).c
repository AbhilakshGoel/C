#include<stdio.h>
//#include<conio.h>
int main()
{
int a, b;
//clrscr();
printf("Enter the Value of A and B: ");
scanf("%d%d", &a, &b);
a = a + b;
b = a - b;
a = a - b;
printf("The Value of A is %d,\nThe Value of B is %d", a, b);
//getch();
return 0;
}
