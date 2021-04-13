#include<stdio.h>
//#include<conio.h>
void circle(float, float *, float *);
int main()
{
    float r, c, a;
//    clrscr();
    printf("Enter Radius of Circle: ");
    scanf("%f", &r);
    circle(r, &c, &a);
    printf("The Circumference of the Circle = %f\nThe Area of the Circle = %f", c, a);
//    getch();
    return 0;
}
void circle(float r1, float *c1, float *a1)
{
    *c1 = 2*3.14*r1;
    *a1 = 3.14*r1*r1;
}
