#include<stdio.h>
#include<conio.h>
int main()
   {
    int no = 0, i = 0;

    printf("\n Enter number = ");
    scanf("%d", &no);

    printf("\n Table of %d is => \n", no);
    for (i = 10; i >= 1; i--)
    {
        printf("\n %d",no * i);
        }
        printf("\n\n Thanks !!!");
        getch();
        return 0;
    }

