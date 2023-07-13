#include<stdio.h>
#include<conio.h>
int main()
{
      float Amount = 0.0;

      printf("\n Enter Your Account Balance = ");
      scanf("%f",&Amount);

      if(Amount > 10000)
      {
           printf("\n\n\t Welcome to Mall !!!\n");
           printf("\n\t You Are prime customer");
           printf("\n\t Go to counter No 7 for prime offers\n");
      }
      else if (Amount >= 7000)
      {
          printf("\n\n\t Welcome To mall !!!\n");
          printf("\n\t You can Enjoy All shop\n");
      }
       else if (Amount > 1000)
       {
           printf("\n\n\t Welcome to Mall !!!\n");
           printf("\n\t You can shop at ground floor\n");
       }
         else
         {
             printf("\n\n\t minimum balance required To shop is 1000+.\n");
             getch();
             printf("\n\n Thanks for visit !!!");
             getch();
             return 0;
         }
}

