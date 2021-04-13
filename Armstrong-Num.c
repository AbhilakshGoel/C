#include<stdio.h>
//#include<conio.h>
int main()
{
long int cu=0, rem, q, n;
//clrscr();
printf("This Program will Check if the No. is a Armstrong No.\n");
printf("Enter a No: ");
scanf("%ld", &n);
q = n;
while(q!=0)
{
rem = q%10;
cu = cu+ (rem*rem*rem);
q = q/10;
}
if(n==cu)
printf("It is an Armstrong No.");
else
printf("It is not an Armstrong No.");
//getch();
return 0;
}
