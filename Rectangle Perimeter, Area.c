#include<stdio.h>
void rect(int, int, int *, int *);
int main()
{
    int L, b, a, p;
    printf("Enter Length and Breadth of Rectangle: ");
    scanf("%d%d", &L, &b);
    rect(L, b, &a, &p);
    printf("The Area of Rectangle = %d\nThe Perimeter of Rectangle = %d", a, p);
    return 0;
}
void rect(int L1, int B1, int *a1, int *p1)
{
    *a1 = L1*B1;
    *p1 = 2*(L1+B1);
}
