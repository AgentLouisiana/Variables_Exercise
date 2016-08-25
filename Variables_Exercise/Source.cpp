#include <iostream>

int main()

{
		//1

	/*Find the value of each of the following expressions, or explain why it is not a valid expression.Try this without coding it first.
		a) 2 / 3 + 3 / 5
		b) 2 % 3 + 3 % 5
		c) 23 % 15 % -2
		d) 25 * 1 / 2
		e) 25 * 1.0 / 2
		f) 25 * (1 / 2)
		g) 235 / 8 + 7
		h) 235 / 8.0 + 7
		i) ((20 + 1) / 2 - 2.0) / (23 + 3)*0.2*/

		float a = 2.0f / 3.0f + 3.0f / 5.0f;
		int b = 2 % 3 + 3 % 5;
		int c = 2 % 3 + 15 % -2;
		float d = 25.0f * 1.0f / 2.0f;
		float e = 25.0f * 1.0f / 2.0f;
		float o = 25.0f * (1.0f / 2.0f);
		float g = 235.0f / 8.0f + 7.0f;
		float h = 235.0f / 8.0f + 7.0f;
		float z = ((20.0f + 1.0f) / 2.0f - 2.0f) / (23.0f + 3.0f)*0.2f;

		printf("%f \n", a);
		printf("%i \n", b);
		printf("%i \n", c);
		printf("%f \n", d);
		printf("%f \n", e);
		printf("%f \n", o);
		printf("%f \n", g);
		printf("%f \n", h);
		printf("%f \n", z);
		system("pause");

		//2

		/*Select suitable variable names you might use for:
		a) The average height of students in your class
		b) The tax rate for incomes over $65000
		c) The tax rate for incomes below $5000
		d) The total cost of all the games on your Steam library*/

		printf("averageHeight \n");
		printf("taxRateIncome$65000+ \n");
		printf("taxRateIncomeBelow$5000 \n");
		printf("streamLibraryTotal \n");
		system("pause");

		//3

		/*Select suitable data types to hold the following values :
		a) 121
		b) 9.4
		c) r
		d) 100000
		e) False*/

		printf("int = 121 \n");
		printf("float = 9.4f \n");
		printf("float = r \n");
		printf("int = 100000 \n");
		printf("bool = false \n");
		system("pause");
		
		//4

		/*Create a program that swaps two numbers.
		Ask the user for 2 numbers in the console window and store the result in variables called “a”
		and “b” print the result to screen.Write code that swaps the values for these variables, then
		print the variables “a” and “b” again.*/

		int numa;
		int numb;
		int temp;
		std::cout << "Switch these" << std::endl;
		std::cin >> numa;
		std::cin >> numb;
		std::cout << "first" << numb << std::endl << "second" << numb << std::endl;
		temp = numa;
		numa = numb;
		numb = temp;
		std::cout << "Consider Them Switched:" << std::endl << "first:" << numa;
		std::cout << std::endl << "second:" << numb << std::endl;

		system("pause");

		//5

		/*Consider the following code segment. Note: Do not implement it yet.
		int i = 0;
		float f = 0;
		char ch = 'a';
		std::cin >> i >> ch >> f;
		std::cout << "i: " << i << "\nch: " << ch << "\nf: " << f << std::endl;
		
		a) What will be the output when the input is:

			a) 1 A 45
			b) 1A45
			c) 1 9 45
			d) 1 945
			e) B 45.6
			f) 1BC5.6

		a) Compile the code and check your answers.
			a) 1 A 45
			b) 1 A 45
			c) 1 9 45
			d) 1 9 45
			e) 0 a 0
			f) 1 B 0*/

		int i = 0;
		float f = 0;
		char ch = 'a';
		std::cin >> i >> ch >> o;
		std::cout << "i: " << i << "\nch: " << ch << "\nf: " << f << std::endl;

		system("pause");

		//6

		//Ask the user for 5 while numbers. Output the average of these numbers.

		int num1;
		int num2;
		int num3;
		int num4;
		int num5;

		std::cout << "Give me 5 whole numbers" << std::endl;

		std::cin >> num1;
		std::cin >> num2;
		std::cin >> num3;
		std::cin >> num4;
		std::cin >> num5;

		int subAnswer = (num1 + num2 + num3 + num4 + num5);
		int answer = subAnswer / 5;
		printf("%i \n", answer);

		system("pause");

		//7

		/*Write a program that determines the letter that lies halfway between two letters of the 
		alphabet as input by the user.For example, if the user inputs ‘A’ and ‘Z’, the output should
		be ‘M’.Do you know how to deal with upper vs.lower case letters ? Does it matter
		if the letters are input in reverse order?*/

		char letter1;
		char letter2;

		std::cout << "Give me two letters" << std::endl;

		std::cin >> letter1;
		std::cin >> letter2;

		char midAnswer = letter1 + letter2;
		char final = midAnswer / 2;

		printf("%c \n", final);

		system("pause");
		return 0;
}