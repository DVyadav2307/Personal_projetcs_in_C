#include<stdio.h>
#include<math.h>

// code resuability
void opchoice();
void further_prompts(int);

// operations
void add();
void sub();
void divide();
void multiply();
void root();
void square();
void inverse();
void power();
void percent();
void trigo();
void fact();



int main(){
// Greetings
	printf("This is a basic calculator dev. in C\n"
			"By: Divyanshu Yadav\n"
			"latest edit: 30 Aug 2024\n");

// 0 stands for: no default choice
// ask user for operation choice
	opchoice(0);
	return 0;
}



void opchoice(int choice){
// if choice != 0 -> operation is pre-determined
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


void divide(){
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


void multiply(){
	float num1, num2, prod;

	printf("\nEnter numbers with space: ");
	scanf_s("%f%f", &num1, &num2);
	prod = num1 * num2;
	printf("%.2f * %.2f = %.2f\n", num1, num2, prod);

	// prompting for option furthur operations
	// 1 stands fro choie-1 i.e. addition
	further_prompts(4);
}


void root(){
	float num;

	printf("\nEnter the base: ");
	scanf("%f",&num);
	printf("The square-root of %.2f is %.2f\n", num, sqrt(num));

	// prompting for option furthur operations
	// 1 stands fro choie-1 i.e. addition
	further_prompts(5);
	}
	
	
void power(){
	float base, power;
	
	printf("\nEnter base & power with space:");
	scanf("%f%f", &base, &power);
	printf("%.2f ^ %.2f = %.2f", base, power, pow(base, power));
	
	// prompting for option furthur operations
	// 1 stands fro choie-1 i.e. addition
	further_prompts(8);

}


void inverse(){
	float num;

	printf("\nEnter the number: ");
	scanf("%f",&num);
	printf("Inverse of %.2f is %.2f\n", num, 1/num);

	// prompting for option furthur operations
	// 1 stands fro choie-1 i.e. addition
	further_prompts(6);
}


void percent(){
	float nmrtr, dnmntr, percent;

	printf("\nTotal no. of parts (dnmntr): ");
	scanf_s("%f", &dnmntr);
	printf("percent of parts (nmrtr): ");
	scanf_s("%f", &nmrtr);
	percent = nmrtr / dnmntr * 100;
	printf("Percent of %.2f out of %.2f is %.2f\n", nmrtr, dnmntr, percent);

	// prompting for option furthur operations
	// 1 stands fro choie-1 i.e. addition
	further_prompts(7);
}



void fact(){
	int num, clone_num , fact = 1;

	printf("\nEnter the number: ");
	scanf("%d",&num);
	clone_num = num;
	while(num > 1){
		fact = fact * num;
		num--;
	}
	printf("%d! = %d\n", clone_num, fact);

	// prompting for option furthur operations
	// 1 stands fro choie-1 i.e. addition
	further_prompts(9);
}


void trigo(){
	float degrees, radians;

	printf("\nEnter angle in degrees:");
	scanf("%f", &degrees);

	radians = 3.14159265358979323846 / 180 * degrees;
	
	printf("sin(%.2f) = %.2f\t cosec(%.2f) = %.2f\n", radians, sin(radians), radians, 1/sin(radians));
	printf("cos(%.2f) = %.2f\t sec(%.2f) = %.2f\n", radians, cos(radians), radians, 1/cos(radians));
	printf("tan(%.2f) = %.2f\t cot(%.2f) = %.2f\n", radians, tan(radians), radians, 1/tan(radians));
	
	// prompting for option furthur operations
	// 1 stands fro choie-1 i.e. addition
	further_prompts(10);
}