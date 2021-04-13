#include<stdio.h>
//#include<conio.h>
void fact_rev(int, int, int *, int *);
int main()
{
    int f=1, r=0, a, b;
    //clrscr();
    printf("Enter the Number for Factorial: ");
    scanf("%d", &a);
    printf("Enter the Number to be Reversed: ");
    scanf("%d", &b);
    fact_rev(a, b, &f, &r);
    printf("The Factorial is %d\n", f);
    printf("The Reverse is %d", r);
    //getch();
    return 0;
}
void fact_rev(int a1, int b1, int *f1, int *r1)
{
    int rem;
    while(a1>=1)
    {
        *f1 = *f1*a1;
        a1--;
    }
    while(b1!=0)
    {
        rem = b1%10;
        *r1 = (*r1*10)+rem;
        b1 = b1/10;
    }

}
