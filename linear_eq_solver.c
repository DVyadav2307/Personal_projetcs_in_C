#include<stdio.h>
#include<conio.h>
#include<windows.system.h>

int main()
{start:
	system("cls");
	system("color fc");
	printf_s("\n		welcome to the linear equation in two variable solver");
	
		double a1, a2, b1, b2, c1, c2, x, y,A,B,C;
		printf_s("\nEnter the a1, b1, c1 for an equation of the form 'a1(x)+b1(y)+c1=0'");
		scanf_s("%lf%lf%lf", &a1, &b1, &c1);
		if (a1 >= 0 && b1 >= 0 && c1 >= 0)
			printf_s("\nthe equation formed is %lfx +%lfy +%lf = 0", a1, b1, c1);	//+++
		else if (a1 <= 0 && b1 >= 0 && c1 >= 0)
			printf_s("\nthe equation formed is %lfx +%lfy +%lf = 0", a1, b1, c1);	//-++
		else if (a1 >= 0 && b1 <= 0 && c1 >= 0)
			printf_s("\nthe equation formed is %lfx %lfy +%lf = 0", a1, b1, c1);	//+-+
		else if (a1 >= 0 && b1 >= 0 && c1 <= 0)
			printf_s("\nthe equation formed is %lfx +%lfy %lf = 0", a1, b1, c1);	//++-
		else if (a1 <= 0 && b1 <= 0 && c1 >= 0)
			printf_s("\nthe equation formed is %lfx %lfy +%lf = 0", a1, b1, c1);	//--+
		else if (a1 >= 0 && b1 <= 0 && c1 <= 0)
			printf_s("\nthe equation formed is %lfx %lfy %lf = 0", a1, b1, c1);	//+--
		else if (a1 <= 0 && b1 >= 0 && c1 <= 0)
			printf_s("\nthe equation formed is %lfx +%lfy %lf = 0", a1, b1, c1);	//-+-
		else
			printf_s("\nthe equation formed is %lfx %lfy %lf = 0", a1, b1, c1);	//---
		/*the old equation ends here while
		new equation starts from below*/
		printf_s("\n\nEnter the a2, b2, c2 for an equation of the form 'a2(x)+b2(y)+c2=0'");
		scanf_s("%lf%lf%lf", &a2, &b2, &c2);
		if (a2 >= 0 && b2 >= 0 && c2 >= 0)
			printf_s("\nthe equation formed is %lfx +%lfy +%lf = 0", a1, b2, c2);	//+++
		else if (a2 <= 0 && b2 >= 0 && c2 >= 0)
			printf_s("\nthe equation formed is %lfx +%lfy +%lf = 0", a1, b2, c2);	//-++
		else if (a2 >= 0 && b2 <= 0 && c2 >= 0)
			printf_s("\nthe equation formed is %lfx %lfy +%lf = 0", a1, b2, c2);	//+-+
		else if (a2 >= 0 && b2 >= 0 && c2 <= 0)
			printf_s("\nthe equation formed is %lfx +%lfy %lf = 0", a1, b2, c2);	//++-
		else if (a2 <= 0 && b2 <= 0 && c2 >= 0)
			printf_s("\nthe equation formed is %lfx %lfy +%lf = 0", a1, b2, c2);	//--+
		else if (a2 >= 0 && b2 <= 0 && c2 <= 0)
			printf_s("\nthe equation formed is %lfx %lfy %lf = 0", a1, b2, c2);	//+--
		else if (a2 <= 0 && b2 >= 0 && c2 <= 0)
			printf_s("\nthe equation formed is %lfx +%lfy %lf = 0", a1, b2, c2);	//-+-
		else
			printf_s("\nthe equation formed is %lfx %lfy %lf = 0", a1, b2, c2);	//---
		A = a1 / a2;
		B = b1 / b2;
		C = c1 / c2;
		if (A != B)
		{
			y = (a2 * c1 - a1 * c2) / (a1 * b2 - a2 * b1);
			x = -1 * (c1 + b1 * y) / a1;
			printf_s("\nThe equations have one UNIQUE SOLUTIONS.\n\n THE VALUE OF X IS %lf\n THE VALUE OF Y IS %lf", x, y);
			_getch();
			goto start;
		}
		else
		{
			if (B != C)
			{
				printf_s("\nThe equation have NO ANY SOLUTIONS.");
				_getch();
				goto start;
			}
			else
			{
				printf_s("\nBoth equation are equal and have INFINITE NUMBER OF SOLUTIONS");
				_getch();
				goto start;
			}

		}
	return 0;
}