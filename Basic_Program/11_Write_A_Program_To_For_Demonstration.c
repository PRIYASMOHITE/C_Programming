#include<stdio.h>
#include<conio.h>

int main()
{
    int cnt = 0, No = 0;

    printf("\n Enter count = ");
    scanf("%d",&cnt);

    for( No = 1 ; cnt > 0; No++, cnt--)
         {
                      printf("\n %3d TALBID", No);

         }
         printf("\n\n Thanks!!!");
         getch();
         return 0;

}
