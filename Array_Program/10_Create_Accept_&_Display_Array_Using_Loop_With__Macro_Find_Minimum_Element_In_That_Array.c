
#include<stdio.h>
#include<conio.h>
#define Size 7
int main()
{
    int Num[Size]={},i = 0,Min= 0;

    printf("\n Enter Array Elements =>\n\n ");

    for(i = 0;i < Size;i++)
    {
        printf("\n Enter Element[%d] = ",i+101);
        scanf("%d",&Num[i]);

    }


    for(i = 0;i < Size;i++)
    {
        if((i==0) || (Num[i]<Min))

        {
            Min = Num[i];
        }
    }

    printf("\n Minimum Element in Array is = %d",Min);
    printf("\n Thanks \n Press Any Key To Quit!!!");
    getch();
    return 0;
}


