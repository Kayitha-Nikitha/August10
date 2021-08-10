#include<stdio.h>

void main()
{
    int i, start, end;
    printf("enter the range:");
    scanf("%d %d", &start, &end);
    printf("Even numbers are \t");
    for(i=start; i<=end; i++){
        if (i % 2 == 0){
            printf("%d\t", i);
        }
    }
    printf("\nOdd numbers are \t");
    for(i=start; i<=end; i++)
        {
        if(i%2!=0){
            printf("%d\t", i);
        }
    }
}
