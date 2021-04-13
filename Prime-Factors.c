#include<stdio.h>
int main()
{
int n, c=2;
printf("This Program will Print the Prime Factors of the Entered Number\n");
printf("Enter a Number: ");
scanf("%d", &n);
while(n!=1)
{
if(n%c==0)
{
printf("%d * ", c);
n = n/c;
continue;
}
c++;
}
printf("1");
return 0;
}
