#include<stdio.h>
//#include<conio.h>
int main()
{
float sci, math, eng, hin, comp, sum, per, max;
//clrscr();
printf("Enter your Science Marks: ");
scanf("%f", &sci);
printf("Enter your Maths Marks: ");
scanf("%f", &math);
printf("Enter your English Marks: ");
scanf("%f", &eng);
printf("Enter your Hindi Marks: ");
scanf("%f", &hin);
printf("Enter your Computer Marks: ");
scanf("%f", &comp);
printf("Enter the Maximum of all Marks(Eg-500): ");
scanf("%f", &max);
sum = sci + math + eng + hin + comp;
per = 100*sum/max;
printf("Your Total Marks = %f\nYour Percentage = %f\n", sum, per);
if(per>=60)
printf("You are in the First Division");

else
if(per>=50 && per<60)
printf("You are in the Second Division");

else
if(per>=40 && per<50)
printf("You are in the Third Division");

else
printf("You are FAILED!");
//getch();
return 0;
}
