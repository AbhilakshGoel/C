#include<stdio.h>
void swap(int, int);
int main()
{
    int a, b;
    printf("Enter a Number: ");
    scanf("%d", &a);
    printf("Enter Another Number: ");
    scanf("%d", &b);
    swap(a, b);
}
swap(int x, int y)
{
    x = x+y;
    y = x-y;
    x = x-y;
    printf("The First No is %d and the Second No is %d", x, y);
}
