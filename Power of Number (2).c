#include<stdio.h>
power(int, int);
int main()
{
    long int b, p, a;
    printf("Enter the Base Value: ");
    scanf("%ld", &b);
    printf("Enter the Power: ");
    scanf("%ld", &p);
    a = power(b, p);
    printf("The Answer is %ld", a);
    return 0;
}
power(int b, int p)
{
    int i, a=1;
    for(i=1; i<=p; i++)
    {
        a = a*b;
    }
    return(a);
}
