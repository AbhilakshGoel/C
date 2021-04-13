#include<stdio.h>
//#include<conio.h>
int main()
{
long int a, rem, r=0, n;
//clrscr();
printf("This Program will Check if the Entered No is a Palindrome No.\n");
printf("Enter a No: ");
scanf("%ld", &n);
a = n;
while(a!=0)
{
rem = a%10;
r = r*10 + rem;
a = a/10;
}
printf("%ld is the Reverse No.\n", r);
if(a==n)
printf("It is a Palindrone Number");
else
printf("It is not a Palindrome Number");
//getch();
return 0;
}


