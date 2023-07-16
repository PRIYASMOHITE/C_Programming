#include<stdio.h>
#include<conio.h>
#define Size 5

int main()
{
    int num[Size] = {}, i = 0,Sum = 0;

    printf("\n\n\t*************************************************************************************");

    printf("\n\n\t\tEnter Array Element :");

    for(i = 0;i<Size; i++)
    {
        printf("\n\n\t\tEnter Value Of %d Element =",i+1);
        scanf("%d",&num[i]);
    }
    printf("\n\n\t***********************************************************************************");
    for( i = 0; i< Size; i++)
    {
        Sum = Sum + num[i];
    }
    printf("\n Sum Of Array =%d",Sum);
    printf("\n\n Thanks \n Press Any Key To Quit!!!");

    getch();
    return 0;
}
