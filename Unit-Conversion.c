#include<stdio.h>
int main()
{
float distance,m,feet,inch,cm;
printf("Enter the Distance between Yamunanagar and Jagadhari(in km): ");
scanf("%f", &distance);
m = distance*1000;
feet = distance*3280.84;
inch = distance*39370.079;
cm = distance*100000;
printf("The Distance between the Two Cities(in m)= %f\n (in feet)= %f\n (in inches)= %f\n (in cm)= %f\n", m, feet, inch, cm);
return 0;
}