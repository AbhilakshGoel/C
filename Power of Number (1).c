#include<stdio.h>
//#include<conio.h>
#include<math.h>
int main()
{
long int b, p, ans;
//clrscr();
printf("Enter the Base Value and Power Respectively: ");
scanf("%ld%ld", &b, &p);
ans = pow(b,p);
printf("The Answer is %ld", ans);
//getch();
return 0;
}
