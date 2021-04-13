#include<stdio.h>
int main()
{
long int rem, a=0, n;
printf("Enter a Five Digit Number: ");
scanf("%ld", &n);

rem = n%10;
a = a+rem;
n = n/10;

rem = n/1000;
a = a+rem;

printf("The Sum of The First and Last Digits of The Number is %ld", a);
return 0;
}
