#include<stdio.h>
#include<conio.h>
#define size 6

 int main()
 {
     int Arr[size]={0},i=0,Z_Cnt = 0;

     for(i = 0;i<size;i++)
     {
         printf("\n %d.Enter Element =",i+101);
         scanf("%d",&Arr[i]);
         }
         for(i=0;i < size;i++)
         {
             printf("\n\n %d.Element Is = %d",i+101,Arr[i]);
         }

         for(i=0;i<size;i++)
         {
             if(Arr[i] == 0)
             {
                 Z_Cnt++;
             }
         }
         printf("\n\n count of zero is = %d",Z_Cnt);
         getch();
         return 0;
 }
