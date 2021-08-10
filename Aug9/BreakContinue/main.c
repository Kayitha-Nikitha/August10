#include<stdio.h>
int main()
{
    int number, sum=0;
    char choice;

    printf("Enter your choice\n");
    printf("a. Skip if any negative number is entered\nb. Loop termination on entering negative number\n");
    scanf("%c", &choice);
switch(choice){
    {
    case'a':
        for(int i=1 ; i<=10; i++)
        {
            printf("Enter number: ");
            scanf("%d",&number);
        if( number<0 )
            continue;
            sum += number; // sum = sum + number
        }
    printf("Sum = %d\n",sum);
    break;
    }
    case'b':
        for(int i=1 ; i<=10; i++)
        {
            printf("Enter number: ");
    		scanf("%d",&number);
	    	if(number<0)
		    {
			    break;
		    }
		    sum+=number;
	    }
	printf("Sum = %d\n",sum);
    }
 return 0;
}
