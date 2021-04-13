#include<stdio.h>
#include<math.h>
int main()
{
    int i=1, a;
    for(;i<=7;i++)
    {
        a = i*pow(-1, i);
        printf("%d\n", a);
    }
    return 0;
}
