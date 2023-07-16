#include<stdio.h>
#include<conio.h>
#define Cnt 7
int main()
{
    int Arr[Cnt]={},i = 0,Min= 0;

    printf("\n\t Enter Seven Number = ");

    for(i = 0;i < Cnt;i++)
    {
        printf("\n Enter %d Number = ",i+1);
        scanf("%d",&Arr[i]);

    }
    for(i = 0;i < Cnt;i++)
    {
        if(Min > Arr[i]);
        {
            Min = Arr[i];
        }

    }
    printf("\n Minimum Number Is = %d",Min);
    getch();
    return 0;
}

