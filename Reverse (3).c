#include<stdio.h>
int main()
{
    long int n, rem, r=0;
    printf("Enter a Number: ");
    scanf("%ld", &n);
    do
    {
        rem = n%10;
        r = r*10 +rem;
        n = n/10;
    }while(n!=0);
    printf("%d", r);
    return 0;
}
