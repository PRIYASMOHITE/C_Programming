#include<stdio.h>
#include<conio.h>
int main()
{
           int no = 0;
           printf("\n Enter a number = ");
           scanf("%d",&no);

           if (no > 0)
           {
               printf("\n Welcome you have entered a positive number");
               }
               else
               {
                   printf("\n Welcome you have entered a negative Number");
                }
                getch();
                printf("\n Thanks for interacting...");
                getch();
                return 0;
}

