#include<stdio.h>

int main()
{
    double a, b;
    char choice;

    printf("Enter your choice\n");
    printf("a. Addition\nb. Subtraction\n");
    scanf("%c", &choice);


   printf("Enter 2 integer numbers\n");
   scanf("%lf %lf", &a, &b);


    switch(choice)
    {
        case 'a': printf("%.2lf + %.2lf = %.2lf\n", a, b, (a+b));
                break;

        case 'b': printf("%.2lf - %.2lf = %.2lf\n", a, b, (a-b));
                break;

        default: printf("default case- noaction\n");
                 break;
    }

    return 0;
}
