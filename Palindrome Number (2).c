#include<stdio.h>
//#include<conio.h>
int main()
{
long int rem, q, n, ans=0;
//clrscr();
printf("Enter a Five Digit Number: ");
scanf("%ld", &n);

rem = n%10;
q = n/10;
ans = (ans*10)+rem;

rem = q%10;
q = q/10;
ans = (ans*10)+rem;

rem = q%10;
q = q/10;
ans = (ans*10)+rem;

rem = q%10;
q = q/10;
ans = (ans*10)+rem;

rem = q%10;
ans = (ans*10)+rem;

if(ans==n)
printf("The Reverse of this Number is Equal to this Number");
else
printf("The Reverse of this Number is not Equal to this Number");

//getch();
return 0;
}

