#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.system.h>

int main()
{
start:
	system("color fc");
	printf_s("\n						welcome to Quadratic Solver\n for an equation 'ax^2 +bx +c=0'");
	int a, b, c, D, a1, b1, x, dec1, dec2, dec3, sign, rem, num1, num2;
	double D1, x1, x2;
	printf_s("\nEnter the 'a' >>");
	scanf_s("%d", &a);
	printf_s("\nEnter the 'b' >>");
	scanf_s("%d", &b);
	printf_s("\nEnter the 'c' >>");
	scanf_s("%d", &c);
	start2:
	if (a >= 0 && b>=0 && c>=0)
	{
		printf_s("\nthe quadratic equation formed is '%dx^2 +%dx +%d=0'", a, b, c);

	}
	else if (a <= 0 && b>=0 && c >= 0)
	{
		printf_s("\nthe quadratic equation formed is '%dx^2 +%dx +%d=0'", a, b, c);
	}
	else if (a >= 0 && b <= 0 && c >= 0)
	{
		printf_s("\nthe quadratic equation formed is '%dx^2  %dx +%d=0'", a, b, c);
	}
	else if (a >= 0 && b >= 0 && c <= 0)
	{
		printf_s("\nthe quadratic equation formed is '%dx^2 +%dx  %d=0'", a, b, c);
	}
	else if (a<=0 && b<=0 && c >= 0)
	{
		printf_s("\nthe quadratic equation formed is '%dx^2  %dx +%d=0'", a, b, c);
	}
	else if (a >= 0 && b<=0 && c <= 0)
	{
		printf_s("\nthe quadratic equation formed is '%dx^2  %dx  %d=0'", a, b, c);
	}
	else if (a <= 0 && b>=0 && c <= 0)
	{
		printf_s("\nthe quadratic equation formed is '%dx^2 +%dx  %d=0'", a, b, c);
	}
	else if (a <= 0 && b<=0 && c <= 0)
	{
		printf_s("\nthe quadratic equation formed is '%dx^2  %dx  %d = 0'", a, b, c);
	}
	else
	{
		printf_s("\nenter the correct input");
	}
	printf_s("\n  is it correct?\n >>press 1 for yes\n >>press 0 for no :");
	scanf_s("%d",&dec1);
	if (dec1 == 1)
	{
		if (a < 0)
		{
			sign = a;
			a = sign * (-1);
			sign = b;
			b = sign * (-1); 
			sign = c;
			c = sign * (-1);
			if (b >= 0 && c >= 0)
			{
				printf_s("\nThe equation has been transformed into %dx^2 +%dx +%d=0",a,b,c);
			}
			else if (b <= 0 && c >= 0)
			{
				printf_s("\nThe equation has been transformed into %dx^2 %dx +%d=0", a, b, c);
			}
			else if (b >= 0 && c <= 0)
			{
				printf_s("\nThe equation has been transformed into %dx^2 +%dx %d=0", a, b, c);
			}
			else
			{
				printf_s("\nThe equation has been transformed into %dx^2 %dx %d=0", a, b, c);
			}
			goto start1;
		}
		else if (a == 0)
		{
			if (b >= 0 && c >= 0)
			{
				printf_s("\nThe eqation has been transformed into %dx +%d", b, c);
			}
			else if (b <= 0 && c>=0)
			{
				printf_s("\n The eqaution has been transformed into %dx +%d", b, c);
			}
			else if (b >= 0 && c <= 0)
			{
				printf_s("\nThe equation has been transformed into %dx %d", b, c);
			}
			else if (b <= 0 && c <= 0)
			{
				printf_s("\n The equation is transformed into %dx %d", b, c);
			}
			else
			{
				printf_s("\nEnter the correct input and Enter to try again");
				_getch();
				goto start;
			}
			x = ((-1) * c) / b;
			printf_s("\n The equation has only one ROOT since the degree is 1\n The ROOT is %d\n press enter for another one",x);
			_getch();
			system("cls");
			goto start;
		}
		else
		{
			goto start1;
		}
		start1:
		D = (b * b) - (4 * a * c);
		a1 = 2 * a;
		b1 = (-1) * b;
		if (D == 0)
		{
			rem = (b1) % a1;
			x = (b1) / a1;
			printf_s("\n The equation has EQUAL ROOTS as value of D is %d", D);
			if (rem == 0)
			{
				printf_s("\nThe ZEROS are x=%d and x=%d\n press enter for another one", x, x);
				_getch();
				system("cls");
				goto start;
			}
			else
			{
				printf_s("\nThe ZEROS are x=%d/%d and x=%d/%d\n press enter for another one", b1, a1, b1, a1);
				_getch();
				system("cls");
				goto start;
			}
		}
		else if (D > 0)
		{
			printf_s("\n The equation has REAL ROOTS as the value of D is %d\n do you want roots as real numbers?\n >>press 1 for yes\n >>press 2 for in sqrt\n >>else any to exit", D);
			scanf_s("%d",&dec2);
			if (dec2 == 1)
			{
				D1 = sqrt(D);
				x1 = (b1 + D1) / a1;
				x2 = (b1 - D1) / a1;
				printf_s("\n The ZEROS are x=%lf and x=%lf\n do you want ans in fraction?\n >>press 1 for yes\n >>press else for another one", x1, x2);
				scanf_s("%d", &dec3);
				num1 = b1 + D1;
				num2 = b1 - D1;
				if (dec3 == 1)
				{
					printf_s("\nIn fractions x=%d/%d and x=%d/%d\n press enter for another one", num1, a1, num2, a1);
					_getch();
					system("cls");
					goto start;
				}
				else
				{
					system("cls");
					goto start;
				}
			}
			else if (dec2 == 2)
			{
				printf_s("\n the ZEROS are x=(%d+sqrt[%d])/%d and x=(%d-sqrt[%d])/%d\n press enter for another one", b1, D, a1, b1, D, a1);
				_getch();
				system("cls");
				goto start;
			}
			else
			{
				printf_s("\nthanks for using");
			}
		}
		else
		{
			printf_s("\n The equation has NO REAL ROOTS as the value of D is %d\n press enter for another one", D);
			_getch();
			system("cls");
			goto start;
		}
	}
	else if (dec1 == 0)
	{
		goto start;
	}
	else
	{
		printf_s("\nEnter the correct input");
		goto start2;
	}
			//temprorary
	return 0;
}