#include<stdio.h>
//#include<conio.h>
int main()
{
float n, a=0, b=1, i=1;
//clrscr();
printf("This Calculates the Answer with the Equation 1/1! + 2/2! +....+n/n!\n");
printf("Enter the Value of n: ");
scanf("%f", &n);
while(i<=n)
{
b = b*i;
a = a+i/b;
i++;
}
printf("%f", a);
//getch();
return 0;
}
