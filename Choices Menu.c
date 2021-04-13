#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int c, a, f=1, r=0;
    while(1)
    {
        printf("\n*****MENU*****\n");
        printf("1- Factorial\n");
        printf("2- Reverse of Given No\n");
        printf("3- Even/Odd\n");
        printf("4- Exit\n");
        printf("Enter Choice: ");
        scanf("%ld", &c);
        switch(c)
        {
        case 1:
            printf("\nFACTORIAL\n");
            printf("Enter a Number: ");
            scanf("%ld", &a);
            while(a>=1)
            {
                f = f*a;
                a--;
            }
            printf("The Factorial is %ld\n", f);
            break;
        case 2:
            printf("\nREVERSE\n");
            printf("Enter a Number: ");
            scanf("%ld", &a);
            while(a!=0)
            {
                f = a%10;
                r = r*10+f;
                a = a/10;
            }
            printf("The Reverse of the Number is %ld\n", r);
            break;
        case 3:
            printf("\nEVEN/ODD\n");
            printf("Enter a Number: ");
            scanf("%ld", &a);
            r = a%2;
            if(r==0)
                printf("It is an Even Number\n");
            else
                printf("It is an Odd Number\n");
            break;
        case 4:
            exit(0);
        default:
            printf("Please Enter a Correct Choice!\n");
        }
    }
        return 0;
}
