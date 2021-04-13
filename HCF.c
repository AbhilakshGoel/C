#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the Two Numbers for HCF: ");
    scanf("%d%d", &a, &b);
    if(a<b)
    {
        a = a+b;
        b = a-b;
        a = a-b;
    }
    do
    {
        c = a%b;
        a = b;
        b = c;
    }while(c!=0);
    printf("The HCF is %d", a);
    return 0;
}
