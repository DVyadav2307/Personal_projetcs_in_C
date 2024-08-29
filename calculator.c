#include<stdio.h>
#include<math.h>

void opchoice();
void further_prompts(int);

void add();
void sub();
int divide();
int multiply();
int root();
int square();
int inverse();
int power();
int percent();
int trigo();
int fact();



int main(){

// Greetings
	printf("This is a basic calculator dev. in C\n"
			"By: Divyanshu Yadav\n"
			"latest edit: 29 Aug 2024\n");

// 0 stands for: no default choice
// ask user for operation choice
	opchoice(0);

}



void opchoice(int choice){

	if (choice == 0){
		printf("\nFollowing operations are supported:\n"
				"1.Addition\n"
				"2.Subtraction\n"
				"3.Division\n"
				"4.Multiplication\n"
				"5.Square root\n"
				"6.Inverse (multiplicative)\n"
				"7.Percentage\n"
				"8.Exponents\n"
				"9.Factorial\n"
				"10.Trignometric Operatios\n"
				"\nEnter your choice:");
		scanf("%d", &choice);
	}

	switch (choice)
	{
	case 1:
		add(); break;
	case 2:
		sub(); break;
	case 3:
		divide(); break;
	case 4:
		multiply(); break;
	case 5:
		root(); break;
	case 6:
		inverse(); break;
	case 7:
		percent(); break;
	case 8:
		power(); break;
	case 9:
		fact(); break;
	case 10:
		trigo(); break;
	default:
		printf("Invalid choice!, retry.\n"); break;
	}
}



void further_prompts(int numchoice){

	char choice;

	printf("\nDo you want to redo? Yes->[y]: ");
	scanf("%s", &choice);

	if(choice == 'y'){
		opchoice(numchoice);
	}
	else{
		// flushing the keyboard  buffer
		while((choice = getchar()) != '\n');

		printf("Do you want another operation? Yes->[y]:");
		scanf("%c", &choice);
		if(choice == 'y'){
			opchoice(0);
		}
		else{
			printf("Goodbye!\n");
		}
	}
}



void add(){

	float num1, num2, sum;

	printf("\nEnter numbers with space: ");
	scanf_s("%f%f", &num1, &num2);
	sum = num1 + num2;
	printf("%.2f + %.2f = %.2f\n", num1, num2, sum);

	// prompting for option furthur operations
	// 1 stands fro choie-1 i.e. addition
	further_prompts(1);
}



void sub(){
	
	float num1, num2, diff;

	printf("\nFrom this number: ");
	scanf_s("%f", &num2);
	printf("Subtract this number: ");
	scanf_s("%f", &num1);
	diff = num2 - num1;
	printf("%.2f - %.2f = %.2f\n", num2, num1, diff);

	// prompting for option furthur operations
	// 1 stands fro choie-1 i.e. addition
	further_prompts(2);
}


int divide(){

	float num1, num2, quo;

	printf("\nDividend (nmrtr): ");
	scanf_s("%f", &num2);
	printf("Divisor (dnmntr): ");
	scanf_s("%f", &num1);
	quo = num2 / num1;
	printf("%.2f / %.2f = %.2f\n", num2, num1, quo);

	// prompting for option furthur operations
	// 1 stands fro choie-1 i.e. addition
	further_prompts(3);
}


int multiply(){

	float num1, num2, prod;

	printf("\nEnter numbers with space: ");
	scanf_s("%f%f", &num1, &num2);
	prod = num1 * num2;
	printf("%.2f * %.2f = %.2f\n", num1, num2, prod);

	// prompting for option furthur operations
	// 1 stands fro choie-1 i.e. addition
	further_prompts(4);
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
		//system("cls");
		return choice;
	}
	else
	{
		printf_s("\nThank you");
		//_getch();
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
		//system("cls");
		return choice;
	}
	else
	{
		printf_s("\nThank you");
		//_getch();
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
		//system("cls");
		return choice;
	}
	else
	{
		printf_s("\nThank you");
		//_getch();
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
		//system("cls");
		return choice;
	}
	else
	{
		printf_s("\nThank you");
		//_getch();
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
		//system("cls");
		return choice;
	}
	else
	{
		printf_s("\nThank you");
		//_getch();
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
		//system("cls");
		return choice;
	}
	else
	{
		printf_s("\nThank you");
		//_getch();
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
		//system("cls");
		return choice;
	}
	else
	{
		printf_s("\nThank you");
		//_getch();
	}
	return 0;
}