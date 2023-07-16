
#include <stdio.h>
#include <conio.h>
int main()
{
	int i, j;

	int rows = 5;
	char character = 'A';
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%c ",character);


			character++;
		}
		printf("\n");
	}
	getch();
	return 0;

}

