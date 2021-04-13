#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a, b, c;
    char ch;
    while(1)
    {
        printf("\n*****MENU*****\n+ for Add\n- for Subtract\n* for Multiply\n/ for Quotient\nE for Exit\n");
        printf("Enter Choice: ");
        fflush(stdin);
        scanf("%c", &ch);
        switch(ch)
        {
        case '+':
            printf("Enter First Number: ");
            scanf("%d", &a);
            printf("Enter Second Number: ");
            scanf("%d", &b);
            c = a+b;
            printf("The Sum of %d and %d is %d\n", a, b, c);
            break;
        case '-':
             printf("Enter First Number: ");
            scanf("%d", &a);
            printf("Enter Second Number: ");
            scanf("%d", &b);
            c = a-b;
            printf("The Difference of %d and %d is %d\n", a, b, c);
            break;
        case '*':
             printf("Enter First Number: ");
            scanf("%d", &a);
            printf("Enter Second Number: ");
            scanf("%d", &b);
            c = a*b;
            printf("The Product of %d and %d is %d\n", a, b, c);
            break;
        case '/':
            printf("Enter First Number: ");
            scanf("%d", &a);
            printf("Enter Second Number: ");
            scanf("%d", &b);
            c = a/b;
            printf("The Quotient of %d and %d is %d\n", a, b, c);
            break;
        case 'e':
        case 'E':
            exit(0);
        default:
            printf("Please Enter Correct Value!\n");
        }

    }
    return 0;
}
