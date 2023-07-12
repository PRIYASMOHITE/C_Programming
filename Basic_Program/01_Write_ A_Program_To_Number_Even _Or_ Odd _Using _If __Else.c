//Number Even or odd -Using if else.c

#include<stdio.h>
#include<conio.h>

int main()
{
            int num = 0;
    printf("\n Enter an Integer Number = ");
    scanf("%d",&num);

    if( num == 0)

    {
        printf("\n Given number is neutral.");
    }
    else if (num % 2 == 0)
    {


       printf("\n Given number is EVEN.");
       }

else
{
    printf("\n Given number is ODD.");
}
printf("\n Thanks");
getch();
return 0;
}
