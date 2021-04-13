#include<stdio.h>
sum();
int main()
{
    int c;
    c = sum();
    printf("The Sum is %d", c);
    return 0;
}
sum()
{
    int a, b;
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    return(a+b);
}
