#include<stdio.h>
#include<conio.h>

int main()
{

    float Amount = 0.0;
    printf("\n Enter Your account Balance = ");
    scanf("%f",&Amount);

    if(Amount > 1000)
    {
        printf("\n\n\t Welcome to Mall !!!\n");
        if(Amount > 100000)
        {
            printf("\n\n\t You can be prime member of this mall !!!");
            }
            printf("\n\n\t Have a nice shopping!!");
    }
    else
    {
        printf("\n\n\t minimum balance required to shop here is 1000+.\n");
        if (Amount > 500)
        {
            printf("\t but you can visit our outlet at corner !!!\n");
        }
        else
        {
            printf("\n\t You are not eligible to shop!!!");
        }
    }
    printf("\n\n thanks for visit !!!");
    getch();
    return 0;
}
