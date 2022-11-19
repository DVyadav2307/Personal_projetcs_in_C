#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<windows.system.h>
int add();
int sub();
int	divide();
int multiply();
int root();
int square();
int inverse();
int power();
int percent();
int trigo();
int fact();


int main()					/*MAIN FUNCTION*/
{
start:
	system("color fc");
	printf_s("WELCOME   #NOTE- *ONLY NUMERIC INPUTS ARE ALLOWED*\n\n");
	int code;
	printf_s("what do you want to find out? (choose the code from below and then enter the code to proceed)\n\n   addition-[1]     substraction-[2]     division-[3]       multiplication-[4]     sqrt-[5]\n\n   square-[6]       inverse-[7]          percent-[8]        exponents-[9]          factorial-[10]\n\n   trignometry-[11]\n\nType your code here>>>");
	scanf_s("%d", &code);
	if (code == 1)//addition//
	{
		int add();
		if (add() == 2)
			goto start;
	}
	else if (code == 2)//substraction//
	{
		int sub();
		if (sub() == 2)
			goto start;
	}
	else if (code == 3)//division//
	{
		int divide();
		if (divide() == 2)
			goto start;
	}
	else if (code == 4)//multiplication//
	{
		int multiply();
		if (multiply() == 2)
			goto start;
	}
	else if (code == 5)//square root//
	{
		int root();
		if (root() == 2)
			goto start;
	}
	else if (code == 6)//square//
	{
		int square();
		if (square() == 2)
			goto start;
	}
	else if (code == 7)//Inverse//
	{
		int inverse();
		if (inverse() == 2)
			goto start;
	}
	else if (code == 8)	//percentage//
	{
		int percent();
		if (percent() == 2)
			goto start;
	}
	else if (code == 9)//exponents//
	{
		int power();
		if (power() == 2)
			goto start;
	}
	else if (code == 10)//factorial//
	{
		int fact();
		if (fact() == 2)
			goto start;
	}
	else if (code == 11)//trignometry//
	{
		int trigo();
		if (trigo() == 2)
			goto start;
	}
	else			   //invalid input//
	{
		printf_s("you are restricted to enter code till 11 only\n\nNOTE-*If you are unable to reexecute the program then you might have enterd a Character value in the code input,\n press ENTER or try to REOPEN the program*\n");
		_getch();
		system("cls");
		goto start;
	}
	_getch();
	return 0;
}


int add()							/*ADDITION*/
{
start1:
	printf_s("\n*you are restricted to add two numbers at a time*\n\n enter the numbers you want to add:");
	double num1, num2;
	scanf_s("%lf%lf", &num1, &num2);
	double sum;
	sum = num1 + num2;
	printf_s("\nthe ans is %lf\n\n >>>press 1 for another sum\n >>>press 2 for diffrent operator choice\n >>>press any else to exit", sum);
	int choice;
	scanf_s("%d", &choice);
	if (choice == 1)
	{
		goto start1;
	}
	else if (choice == 2)
	{
		system("cls");
		return choice;
	}
	else
	{
		printf_s("\nThank you");
		_getch();
	}
	return 0;
}


int sub()							/*SUBTRACTION*/
{
start2:
	printf_s("\n*you are restricted to sub two numbers at a time*\n\n enter the numbers you want to sub:");
	double num1, num2;
	scanf_s("%lf%lf", &num1, &num2);
	double diff;
	diff = num1 - num2;
	printf_s("\nthe ans is %lf\n\n >>>press 1 for another diff\n >>>press 2 for diffrent operator choice\n >>>press any else to exit", diff);
	int choice;
	scanf_s("%d", &choice);
	if (choice == 1)
	{
		goto start2;
	}
	else if (choice == 2)
	{
		system("cls");
		return choice;
	}
	else
	{
		printf_s("\nThank you");
		_getch();
	}
	return 0;
}


int divide()				/*DIVISION*/
{
start3:
	printf_s("\n enter the numbers you want to divide:");
	double num1, num2;
	scanf_s("%lf%lf", &num1, &num2);
	double div;
	div = num1 / num2;
	printf_s("\nthe ans of %lf/%lf is %lf\n\n >>>press 1 for another division\n >>>press 2 for diffrent operator choice\n >>>press any else to exit", num1, num2, div);
	int choice;
	scanf_s("%d", &choice);
	if (choice == 1)
	{
		goto start3;
	}
	else if (choice == 2)
	{
		system("cls");
		return choice;
	}
	else
	{
		printf_s("\nThank you");
		_getch();
	}
	return 0;
}


int multiply()			/*MULTIPLICATION*/
{
start4:
	printf_s("\n*you are restricted to multiply two numbers at a time*\n\n enter the numbers you want to multiply:");
	double num1, num2;
	scanf_s("%lf%lf", &num1, &num2);
	double prod;
	prod = num1 * num2;
	printf_s("\nthe ans is %lf\n\n >>>press 1 for another product\n >>>press 2 for diffrent operator choice\n >>>press any else to exit", prod);
	int choice;
	scanf_s("%d", &choice);
	if (choice == 1)
	{
		goto start4;
	}
	else if (choice == 2)
	{
		system("cls");
		return choice;
	}
	else
	{
		printf_s("\nThank you");
		_getch();
	}
	return 0;
}


int root()					/*SQUARE ROOT*/
{
start5:
	printf_s("\nEnter the number whose sqrt you want to know:");
	double num1, num2;
	scanf_s("%lf", &num1);
	num2 = sqrt(num1);
	printf_s("\nthe square root of %lf is %lf\n\n >>>press 1 for another sqrt\n >>>press 2 for diffrent operator choice\n >>>press any else to exit", num1, num2);
	int choice;
	scanf_s("%d", &choice);
	if (choice == 1)
	{
		goto start5;
	}
	else if (choice == 2)
	{
		system("cls");
		return choice;
	}
	else
	{
		printf_s("\nThank you");
		_getch();
	}
	return 0;
}


int square()					/*SQUARE*/
{
start6:
	printf_s("\nenter the number whose square you want to find out: ");
	double num1, num2 = 2, num3;
	scanf_s("%lf", &num1);
	num3 = pow(num1, num2);
	printf_s("\n the square of %lf is %lf.\n >>>press 1 for another square operation\n >>>press 2 for diffrent operator choice\n >>>press any else to exit", num1, num3);
	int choice;
	scanf_s("%d", &choice);
	if (choice == 1)
	{
		goto start6;
	}
	else if (choice == 2)
	{
		system("cls");
		return choice;
	}
	else
	{
		printf_s("\nThank you");
		_getch();
	}
	return 0;
}


int inverse()				/*INVERSE*/
{
start7:
	printf_s("\nEnter the number whose inverse you want to find out :");
	double num1, num2;
	scanf_s("%lf", &num1);
	num2 = 1 / num1;
	printf_s("\nThe inverse of %lf is %lf.\n >>>press 1 for another inverse operation\n >>>press 2 for diffrent operator choice\n >>>press any else to exit", num1, num2);
	int choice;
	scanf_s("%d", &choice);
	if (choice == 1)
	{
		goto start7;
	}
	else if (choice == 2)
	{
		system("cls");
		return choice;
	}
	else
	{
		printf_s("\nThank you");
		_getch();
	}
	return 0;
}


int percent()				/*PERCENT*/
{
start8:
	printf_s("\nEnter the numerator then denominator with space in b/w them");
	double num1, num2, num3;
	scanf_s("%lf%lf", &num1, &num2);
	num3 = (num1 / num2) * 100;
	printf_s("The calculated percentage is %lf.\n >>>press 1 for another percent operation\n >>>press 2 for diffrent operator choice\n >>>press any else to exit", num3);
	int choice;
	scanf_s("%d", &choice);
	if (choice == 1)
	{
		goto start8;
	}
	else if (choice == 2)
	{
		system("cls");
		return choice;
	}
	else
	{
		printf_s("\nThank you");
		_getch();
	}
	return 0;
}


int power()					/*EXPONENTS*/
{
start9:
	printf_s("\nenter the base and power saparately\n\n first enter the base then power with a space between them: ");
	double num1, num2, num3;
	scanf_s("%lf%lf", &num1, &num2);
	num3 = pow(num1, num2);
	printf_s("\nthe %lf raised to the power %lf is %lf.\n >>>press 1 for another power operation\n >>>press 2 for diffrent operator choice\n >>>press any else to exit", num1, num2, num3);
	int choice;
	scanf_s("%d", &choice);
	if (choice == 1)
	{
		goto start9;
	}
	else if (choice == 2)
	{
		system("cls");
		return choice;
	}
	else
	{
		printf_s("\nThank you");
		_getch();
	}
	return 0;
}


int fact()				/*FACTORIAL*/
{
start11:
	printf_s("\nEnter the number whoose factorial you want to find out>>");
	double num1, fact = 1;
	scanf_s("%lf", &num1);
	for (int i = 1; i <= num1; i++)
	{
		fact = fact * i;
	}
	printf_s("the factorial of %lf is %lf\n >> > press 1 for another factorial operation\n >> > press 2 for diffrent operator choice\n >> > press any else to exit", num1, fact);
	int choice;
	scanf_s("%d", &choice);
	if (choice == 1)
	{
		goto start11;
	}
	else if (choice == 2)
	{
		system("cls");
		return choice;
	}
	else
	{
		printf_s("\nThank you");
		_getch();
	}
	return 0;
}


int trigo()				/*TRIGNOMETRY*/
{
start10:
	printf_s("\nEnter the angle 'X' whose all trignometric ratios will be provided");
	double num2, num1, pi;
	scanf_s("%lf", &pi);
	num1 = pi * (0.01746);
	num2 = sin(num1);//sin
	printf_s("\nThe sin of angle %lf is %lf", pi, num2);
	num2 = cos(num1);//cos
	if (pi == 90)
		num2 = 0;
	printf_s("\nThe cos of angle %lf is %lf", pi, num2);
	num2 = tan(num1);//tan
	if (pi == 90)
		printf_s("\nThe tan of angle %lf is inf", pi);
	else
		printf_s("\nThe tan of angle %lf is %lf", pi, num2);
	num2 = 1 / sin(num1);//cosec
	printf_s("\nThe cosec of angle %lf is %lf", pi, num2);
	num2 = 1 / cos(num1);//sec
	if (pi == 90)
		printf_s("\nThe sec of angle %lf is inf", pi);
	else
		printf_s("\nThe sec of angle %lf is %lf", pi, num2);
	num2 = 1 / tan(num1);//cot
	if (pi == 90)
		num2 = 0;
	printf_s("\nThe cot of angle %lf is %lf\n\n >>>press 1 for another trigno operation\n >>>press 2 for diffrent operator choice\n >>>press any else to exit", pi, num2);
	int choice;
	scanf_s("%d", &choice);
	if (choice == 1)
	{
		goto start10;
	}
	else if (choice == 2)
	{
		system("cls");
		return choice;
	}
	else
	{
		printf_s("\nThank you");
		_getch();
	}
	return 0;
}