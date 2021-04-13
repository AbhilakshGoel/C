#include<stdio.h>
void swap(int*, int*);
int main()
{
    int c, d;
    printf("Enter First Number: ");
    scanf("%d", &c);
    printf("Enter Second Number: ");
    scanf("%d", &d);
    swap(&c, &d);
    printf("First No = %d\nSecond No = %d", c, d);
    return 0;
}
void swap(int *x, int *y)
{
/*  *x = *x+*y;
    *y = *x-*y;
    *x = *x-*y;  */
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
