#include<stdio.h>
//#include<conio.h>
int main()
{
int ram, shyam, ajay;
//clrscr();
printf("Enter Ram's Age: ");
scanf("%d", &ram);
printf("Enter Shyam's Age: ");
scanf("%d", &shyam);
printf("Enter Ajay's Age: ");
scanf("%d", &ajay);
if(ram<shyam)
{
if(ram<ajay)
printf("Ram is the Youngest");
else
printf("Ajay is the Youngest");
}
else
{
if(shyam<ajay)
printf("Shyam is the Youngest");
else
printf("Ajay is the Youngest");
}
//getch();
return 0;
}
