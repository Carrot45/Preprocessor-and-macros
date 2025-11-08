#include <iostream>
#include <string>
#include <windows.h>

#define MODE 1

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

#ifndef MODE
#error Important macro required
#endif

#if MODE == 0
	std::cout << "Работаю в режиме тренировки" << std::endl;

#elif MODE == 1

	int add(int variable1, int variable2);

	std::cout << "Работаю в боевом режиме" << std::endl;
	int variable1{};
	int variable2{};
	std::cout << "Введите число 1: ";
	std::cin >> variable1;
	std::cout << "Введите число 2: ";
	std::cin >> variable2;
	std::cout << "Результат сложения: " << add(variable1, variable2);

#else
	std::cout << "Неизвестный режим. Завершение работы." << std::endl;
#endif
	return EXIT_SUCCESS;
}
int add(int variable1, int variable2)
{
	return (variable1 + variable2);
};


