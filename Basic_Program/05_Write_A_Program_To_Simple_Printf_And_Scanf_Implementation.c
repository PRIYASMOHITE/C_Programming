
// program To Implement Printf & scanf Function

#include<stdio.h>
#include<conio.h>

int main()

{
    int num = 0;
    float dist = 0.0;

    printf ("\n Welcome To \"Talbid\"!!!");
    printf ("\n Value of Number = %d. \t Distance = %0.2f.", num, dist);
    getch();

    printf("\n\n Enter Number = ");
    scanf("%d",&num);

    printf("\n Enter distance = ");
    scanf("%f" ,&dist);

    printf("\n Value of Number = %d. \t Distance = %0.2f.\a", num, dist);
    getch();
    return 0;
}
