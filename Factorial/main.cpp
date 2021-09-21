#include<iostream>
using namespace std;

//#define FACTORIAL;	
//#define POWER;	
//#define FIBONACHI;	

//int Foo(int a) 
//{  ЭТО ПРИМЕР
//	if (a < 1)
//		return 0;
//
//	a--;
//	cout << a << endl;
//	return Foo(a);
//}

int Factorial(int n);
double Power(int b, int a);
void Fib(int c, int d = 0, int x = 1);

void main()
{
	setlocale(LC_ALL, "ru");

	/*Foo(10);*/
	int n;
	cout << "Введите число: "; cin >> n;
	cout << "Факториал числа " << n << " равен: " << Factorial(n) << endl << endl;

	int b, a;
	cout << "Введите значение основания: "; cin >> b;
	cout << "Введите значение степени: "; cin >> a;
	cout << endl;
	cout << "Значение основания " << b << " в степени " << a << " равно: " << Power(b, a);
	cout << endl << endl;

	int c;
	cout << "До какого предела вывести ряд Фибоначчи? "; cin >> c;
	Fib(c);
	
	

}

int Factorial(int n)
{
#ifdef FACTORIAL
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return n * Factorial(n - 1);
#endif // FACTORIAL


	return n == 0 ? 1 : n * Factorial(n - 1);
}

double Power(int b, int a)
	{

#ifdef POWER
	if (a == 0)
		return 1;
	if (a < 0)
		return 1 / b * Power(b, a - 1);

	return b * Power(b, a - 1);
#endif // POWER


		return a == 0 ? 1 : a > 0 ? b * Power(b, a - 1) : 1. / b * Power(b, a + 1);

	
	}

void Fib(int c, int d, int x) //функция вывод числа на экран, поэтому её тип вызова - void
{
	if (d > c)return;
	cout << d << '\t';
	Fib(c, x, d + x);
}

