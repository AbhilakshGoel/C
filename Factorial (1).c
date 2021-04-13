#include<stdio.h>
//#include<conio.h>
int main()
{
long int f=1, n;
//clrscr();
printf("This Program will Calculate the Factorial of a No.\n");
printf("Enter a No: ");
scanf("%ld", &n);
while(n>=1)
{
f = f*n;
n--;
}
printf("%ld", f);
//getch();
return 0;
}
