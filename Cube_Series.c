#include<stdio.h>
//#include<conio.h>
int main()
{
int i=1, limit, cu;
//clrscr();
printf("Enter the Limit to Cubes of Numbers from 0: ");
scanf("%d", &limit);
while(i<=limit)
{
cu = i*i*i;
printf("%d\n", cu);
i++;
}
//getch();
return 0;
}
