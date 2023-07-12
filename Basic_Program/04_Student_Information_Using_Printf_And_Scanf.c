
#include<stdio.h>
#include<conio.h>

int main()
{
    int Roll_No = 0;
    char Name[40] = "\0";
    char course[20] = "\0";
    char city[20] = "\0";

    printf("\n============================***************************=======================\n");
    printf("\n Enter Student Information => \n");

    printf("\n Enter Roll No : ");
    scanf("%d",&Roll_No);

    fflush(stdin);
    printf("\n Enter student Name : ");
    scanf("%[^\n]",&Name);   ///gets(name);

    fflush(stdin);
    printf("\n Enter current city :");
    scanf("%[^\n]", &city);    ///gets(city);

    fflush(stdin);
    printf("\n Enter course Name :");
    scanf("%[^\n]", &course); ///gets(course);

    printf("\n =============================******************************=====================\n");
    printf("\n\n Student Information Entered By You is => \n");

    printf("\n\t Roll No  = %d.",Roll_No );
    printf("\n\t Name     = %s.",Name);
    printf("\n\t City     = %s.",city);
    printf("\n\t Course   =%s.",course);

    printf("\n\n===========================*******************************======================\n");
    getch();
    return 0;
}
