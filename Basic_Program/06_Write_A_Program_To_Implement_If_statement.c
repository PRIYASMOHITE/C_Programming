//program To Implement if statement

#include<stdio.h>
#include<conio.h>

int main()
{
   float Bill = 0.0;

    printf("\n Enter your balance = ");
    scanf("%f",&Bill);

    if (Bill > 100)
    {
          printf("\n Welcome, You are Eligible.");
    }
          printf("\n\n Good Bye, Thanks for visit");

          getch();
          return 0;
    }

