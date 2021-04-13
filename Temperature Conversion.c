#include<stdio.h>
int main()
{
float f,c;
printf("Enter the Temperature of Your City in Fahrenheit: ");
scanf("%f", &f);
c = (f-32)* 5/9;
printf("The Temperature of your City in Centigrade is %f", c);
return 0;
}
