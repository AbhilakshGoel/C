#include<stdio.h>
int main()
{
    int a=0, b=1, c, n, i=1;
    printf("Enter the Limit to Fibonacci Series: ");
    scanf("%d", &n);
    printf("%d\n%d\n", a, b);
    do
    {
        c = a+b;
        a = b;
        b = c;
        printf("%d\n", c);
        i++;
    }while(i<=n-2);
    return 0;
}
