#include <iostream>
using namespace std;

int Add(int a, int b) //ф-я складывает два числа
{
	//Addition - сложение
	int sum = a + b;
	return sum;
}

int Sub(int a, int b)

{
	//Subtraction - вычитание
	return a - b;

}

int Mul(int a, int b)
{
	//Multiplication
	return a * b;

}

int Div(int a, int b)
{
	//Division - деление
	return a / b;

}

int Pow(double a, double b) //возводит число в степень (выводит автоматически?)
{
	return pow(a, b);


}

void main()

{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; 
	cin >> a >> b;
	int c = Add(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	cout << a << " ^ " << b << " = " << Pow(a, b) << endl;
}