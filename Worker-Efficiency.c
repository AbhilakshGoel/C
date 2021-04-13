#include<stdio.h>
//#include<conio.h>
int main()
{
float tim;
//clrscr();
printf("Enter the Time taken by the Worker to Complete the Work(In Hrs): ");
scanf("%f", &tim);
if(tim>=2 && tim<3)
printf("You are a Highly Efficient Worker");

else
if(tim>=3 && tim<4)
printf("You must Improve your Speed");

else
if(tim>=4 && tim<5)
printf("Immediately Go and Practice for your Speed");

else
printf("Leave the Job NOW");
//getch();
return 0;
}
