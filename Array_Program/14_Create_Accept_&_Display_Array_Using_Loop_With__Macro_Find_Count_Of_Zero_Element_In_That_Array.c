#include<stdio.h>
#include<conio.h>
#define size 7

 int main()
 {
     int Num[size]={},i=0,Z_Cnt = 0;
     printf("\n Enter Array Element =>\n\n");

     for(i = 0;i<size;i++)
     {
         printf("\n Enter Element[%d] =",i+101);
         scanf("%d",&Num[i]);
         }
         for(i=0;i < size;i++)
         {
             if(Num[i]==0)
             {
                 Z_Cnt++;
             }
         }

             printf("\n\n Zero Element Count in Array Is = %d",Z_Cnt);
             printf("\n\n Thanks \n Press Any Key To Quit!!!");

         getch();
         return 0;
 }
