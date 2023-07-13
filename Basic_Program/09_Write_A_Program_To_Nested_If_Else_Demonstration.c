#include<stdio.h>
#include<conio.h>
int main()
{
    float Amount = 0.0;

    printf("\n Enter your Account Balance = ");
    scanf("%f",&Amount);

    if(Amount > 1000)
    {
        printf("\n\n\t Welcome To Mall !!!\n");
        if (Amount > 100000)

        {
            printf("\n\n\t You can be prime Member of this Mall !!!");
            }
            printf("\n\n\t Have nice shopping !!");
            }
            else
            {
                printf("\n\n\t Minimum Balance Required To shop Here is 10000+.\n");
                if (Amount > 500)
                {
                    printf("\t But you can Visit our outlet At corner!!!\n");
                }
                else
                {
                    printf("\n\t You Are Not Eligible To shop!!!");
                }
                }
                printf("\n\n Thanks For visit !!!");
                getch();
                return 0;
}
