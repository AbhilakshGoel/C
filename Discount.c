#include<stdio.h>
//#include<conio.h>
int main()
{
long int amount, dis=0;
//clrscr();
printf("Enter the Total Amount to be Paid: ");
scanf("%ld", &amount);

if(amount>=10000)
{dis = amount* .10;
printf("You Got a Gift Pack for Shopping Above Rs.10000\n");
}
amount = amount-dis;
printf("The Discount is Rs.%d\n", dis);
printf("Amount to be Paid After Discount is Rs.%d", amount);
//getch();
return 0;
}
