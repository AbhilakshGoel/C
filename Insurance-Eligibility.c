#include<stdio.h>
//#include<conio.h>
int main()
{
int age;
char ms, gender;
//clrscr();
printf("Enter the Marital Status of the Person(m/u): ");
fflush(stdin);
scanf("%c", &ms);
printf("Enter the Gender of the Person(m/f): ");
fflush(stdin);
scanf("%c", &gender);
printf("Enter the Age of the Person: ");
scanf("%d", &age);
if((ms=='m')||(ms=='u' && gender=='m' && age>30)||(ms=='u' && gender=='f' && age>25))
printf("Driver is Insured");
else
printf("Driver is not Insured");
//getch();
return 0;
}
