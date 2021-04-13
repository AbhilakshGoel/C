#include<stdio.h>
//#include<conio.h>
int main()
{
float hard, c, tensil;
//clrscr();
printf("Enter the Hardness of Steel: ");
scanf("%f", &hard);
printf("Enter the Amount of Carbon in Steel: ");
scanf("%f", &c);
printf("Enter the Tensil of Steel: ");
scanf("%f", &tensil);
if(hard>50 && c<0.7 && tensil>5600)
printf("It is GRADE 10 Steel");

else
if(hard>50 && c<0.7)
printf("It is GRADE 9 Steel");

else
if(c<0.7 && tensil>5600)
printf("It is GRADE 8 Steel");

else
if(hard>50 && tensil>5600)
printf("It is GRADE 7 Steel");

else
if(hard>50 || c<0.7 || tensil>5600)
printf("It is GRADE 6 Steel");

else
printf("It is GRADE 5 Steel");
//getch();
return 0;
}
