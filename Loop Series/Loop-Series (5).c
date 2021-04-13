#include<stdio.h>
//#include<conio.h>
int main()
{
int i, limit;
//clrscr();
printf("NOTE: If the Number you give as the Starting Point is Odd all the Numbers will\n be Odd else they will be Even.\n");
printf("Enter the Starting Point: ");
scanf("%d", &i);
printf("Enter the Limit to Odd/Even Numbers: ");
scanf("%d", &limit);
while(i<=limit)
{
printf("%d\n", i);
i+=2;
}
//getch();
return 0;
}
