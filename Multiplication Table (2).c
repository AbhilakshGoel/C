#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a Number: ");
    scanf("%d", &a);
    for(b=1;b<=10;b++)
    {
        c = a*b;
        printf("%d * %d = %d\n", a, b, c);
    }
    return 0;
}
