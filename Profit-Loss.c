#include<stdio.h>
//#include<conio.h>
int main()
{
long int CP,SP,Profit,Loss;
//clrscr();
printf("Enter the Cost Price of the Item: ");
scanf("%ld", &CP);
printf("Enter the Selling Price of the Item: ");
scanf("%ld", &SP);
if(SP>CP)
{Profit = SP - CP;
printf("There is a Profit of Rs.%ld",Profit);
}
else
{Loss = CP - SP;
printf("There is a Loss of Rs.%ld",Loss);
}
//getch();
return 0;
}
