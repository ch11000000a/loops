#include<iostream>
using namespace std;
//#define DEGREES
//#define TABLE
//#define FIBONACCI_1
//#define FIBONACCI_2
//#define PRIME_NUMBER
//#define MULTIPLICATION_TABLE
//#define PYTHAGOREAN_TABLE
void main() {
	setlocale(LC_ALL, "");
#ifdef DEGREES
	int basis;
	int indicator;
	int degree = 1;
	cout << "Введите основание степени: "; cin >> basis;
	cout << "Введите показатель степени: "; cin >> indicator;
	for (int i = 1; i <= indicator; i++)
	{
		degree *= basis;
	}
	cout << "Степень: " << degree;
#endif DEGREES
#ifdef TABLE
	cout << "\tТаблица ASCII символов" << endl;
	int ASCII = 1;
	for (size_t i = 1; i <= 16; i++)
	{
		for (size_t j = 1; j <= 16; j++)
		{
			cout << (char)ASCII << " ";
			ASCII++;
		}
		cout << endl;
	}
#endif TABLE
#ifdef FIBONACCI_1
	int limit;
	int fibonacci = 0;
	cout << "Укажите предел до которого нужно вывести ряд чисел Фибоначчи: "; cin >> limit;
	int X = -1;
	int Y = 1;
	for (size_t i = 0; i < limit; i++)
	{
		fibonacci = X + Y;
		X = Y;
		Y = fibonacci;
		if (fibonacci > limit) {
			break;
		}
		cout << fibonacci << ", ";
	}
#endif FIBONACCI_1

#ifdef FIBONACCI_2
	int limit;
	int fibonacci = 0;
	cout << "Введите количество чисел которе нужно вывести из ряда чисел Фибоначчи: "; cin >> limit;
	int X = -1;
	int Y = 1;
	for (size_t i = 0; i < limit; i++)
	{
		fibonacci = X + Y;
		X = Y;
		Y = fibonacci;
		cout << fibonacci << ", ";
	}
#endif FIBONACCI_2
#ifdef PRIME_NUMBER
	int limit;
	cout << "Введите предел до которого нужно вывести ряд простых чисел: "; cin >> limit;
	for (int i = 2; i <= limit; i++)
	{
		for (int j = 2; j <= limit; j++)
		{
			if (i % j == 0) {
				if (i != j)
					break;
				cout << i << ", ";
				break;
			}
		}
	}
#endif PRIME_NUMBER
#ifdef MULTIPLICATION_TABLE
	cout << "\t\t\tТаблица умножения" << endl;
	for (size_t i = 1; i < 10; i++)
	{
		for (size_t j = 1; j < 10; j++)
		{
			cout << i << "*" << j << "=" << i * j << "\t";
		}
		cout << endl;
	}
#endif MULTIPLICATION_TABLE
#ifdef PYTHAGOREAN_TABLE
	cout << "\t\t\tТаблица Пифагора" << endl;
	for (size_t i = 1; i <= 10; i++)
	{
		for (size_t j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
#endif PYTHAGOREAN_TABLE
}


