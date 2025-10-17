#include <iostream>
//Napisz program, który wyœwietli informacje czy liczba jest dodatnia czy nie.
	void task1()
	{
		int number;
		std::cout << "Podaj liczbê ca³kowit¹:\n";
		std::cin >> number;

		if (number > 0)
			std::cout << "Podana liczba jest dodatnia\n";

		if (number < 0)
			std::cout << "Podana liczba jest ujemna\n";

		if (number == 0)
			std::cout << "Podania liczba nie jest dodatnia ani ujemna\n";

		std::cout << "Koniec programu\n";
	}
	void task2()
	{
		int number;
		std::cout << "Podaj liczbê ca³kowit¹:\n";
		std::cin >> number;

		int reminderOfDivision;
		reminderOfDivision = number % 2;

		if (reminderOfDivision == 0)
			std::cout << "Podana liczba jest parzysta\n";

		if (reminderOfDivision != 0) // ==1
			std::cout << "Podana liczba jest nieparzysta\n";

		//------------------------------------------------------
		if (reminderOfDivision == 0)
			std::cout << "Podana liczba jest parzysta\n";
		else
			std::cout << "Podana liczba jest nieparzysta\n";
	}

	int main()
	{
		setlocale(LC_CTYPE, "polish");

		task1(); 
	}