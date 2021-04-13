#include<stdio.h>
//#include<conio.h>
int main()
{
int a=0, b=1, c, i=1, n;
//clrscr();
printf("Enter the Limit of the Fibonacci Series: ");
scanf("%d", &n);
printf("%d\n%d\n", a, b);
while(i<=n-2)
{
c = a+b;
printf("%d\n", c);
a = b;
b = c;
i++;
}
//getch();
return 0;
}
