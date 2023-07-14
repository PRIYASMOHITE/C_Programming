//square of given Number.c

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, sqr = 0;
    printf("\n Enter Number =");
    scanf("%d",&No);

    sqr = No * No;

    printf("\n Square of %d = %d.", No,sqr);

    printf("\n\n Thanks!!!");
    getch();
    return 0;

}

