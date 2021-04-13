#include<stdio.h>
//#include<conio.h>
int main()
{
float a, b, c;
//clrscr();
printf("Enter the Sides of a Triangle: ");
scanf("%f%f%f", &a, &b, &c);
if(a+b>c && a+c>b && b+c>a)
printf("It is a Valid Triangle");
else
printf("It is not a Valid Triangle");
//getch();
return 0;
}
