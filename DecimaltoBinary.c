#include<stdio.h>
#include<Windows.system.h>
#include<conio.h>
int main()
{start:
system("cls");
	system("color 0a");
	int decimal,store[9999],i=0;
	printf("\t\t\tWelcome to the decimal to binary converter\n\n Enter the decimal>> ");
	scanf_s("%d", &decimal);	
		for (i; decimal >= 2; i++) 
		{
			
			if (decimal % 2 == 0)
			{
				store[i] = 0;
				decimal = decimal / 2;
			}
			else
			{
				
				store[i] = 1;
				decimal = decimal - 1;
				decimal = decimal / 2;
			}
		}
		if (decimal == 0)
			store[i] = 0;
		else
			store[i] = 1;
		printf("\n The no.in binary>> ");
		for (i; i>= 0; i--)
		{
			printf("%d",store[i]);
		}
		_getch();
		goto start;
}
