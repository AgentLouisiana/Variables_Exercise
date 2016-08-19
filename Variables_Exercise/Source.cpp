#include <iostream>
int main()
{
	{
		//1

		int main();
		float a = 2.0f / 3.0f + 3.0f / 5.0f;
		int b = 2 % 3 + 3 % 5;
		int c = 2 % 3 + 15 % -2;
		float d = 25.0f * 1.0f / 2.0f;
		float e = 25.0f * 1.0f / 2.0f;
		float f = 25.0f * (1.0f / 2.0f);
		float g = 235.0f / 8.0f + 7.0f;
		float h = 235.0f / 8.0f + 7.0f;
		float i = ((20.0f + 1.0f) / 2.0f - 2.0f) / (23.0f + 3.0f)*0.2f;

		printf("%f \n", a);
		printf("%i \n", b);
		printf("%i \n", c);
		printf("%f \n", d);
		printf("%f \n", e);
		printf("%f \n", f);
		printf("%f \n", g);
		printf("%f \n", h);
		printf("%f \n", i);
		system("pause");
	}
	{
		//2

		printf("averageHeight \n");
		printf("taxRateIncome$65000+ \n");
		printf("taxRateIncomeBelow$5000 \n");
		printf("streamLibraryTotal \n");
		system("pause");
	}
	{
		//3

		printf("int = 121 \n");
		printf("float = 9.4f \n");
		printf("float = r \n");
		printf("int = 100000 \n");
		printf("bool = false \n");
		system("pause");
		
	}
	{
		//4

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
	}
	{
		//5

		int i = 0;
		float f = 0;
		char ch = 'a';
		std::cin >> i >> ch >> f;
		std::cout << "i: " << i << "\nch: " << ch << "\nf: " << f << std::endl;

		system("pause");
		return 0;
	}
}