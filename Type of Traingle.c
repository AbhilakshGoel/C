#include<stdio.h>
//#include<conio.h>
int main()
{
float a, b, c;
//clrscr();
printf("Enter the Sides of a Triangle: ");
scanf("%f%f%f", &a, &b, &c);
if(a==b && a==c)
printf("It is an Equilateral Triangle");

else
if(a==b || b==c || a==c)
printf("It is an Isosceles Triangle");

else
if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
printf("It is a Right-Angled Triangle");

else
printf("It is a Scalene Triangle");
//getch();
return 0;
}
