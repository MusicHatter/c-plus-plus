// laba3.cpp: определяет точку входа для консольного приложения.
//

/*	Для выбранного варианта оперделите класс, включив в него
	- конструктор по умолчанию
	- конструктор инициализации
	- конструктор преобразования базового типа к типу, определяемому разрабатываемым классом
	- функцию для ввода данных класса
	- функцию для вывода данных класса
	- функцию, выдающего сообщение об ошибке - попытке создать объект 
	  с нереальными данными (закрытый член класса)

8. Класс "Вектор на плоскости" с данными модуль вектора
	и угол между вектором и положительным направлением оси X
	
	1.	Все конструкторы и функции ввода-вывода - члены класса, определите  внутри класса.*/

#include "stdafx.h"
#include <iostream>
#include "math.h"

using namespace std;
	
class MyClass {
private:
	double angle;
	double module;
	int Error()
	{
		//Фукция вывода сообщения об ошибке. (угол - любое целое число, модуль вектора неотрицателен)
		if (module < 0) {
			cout << "Ошибка! Модуль должен быть больше или равен 0. Выполняется преобразование" << endl;
			module = module * -1;
		}
		if ( (double)( (int) angle ) != angle) {
			cout << "Ошибка! Угол должен быть целым числом. Выполняется преобразование" << endl;
			MyClass MD1(angle);
		}
		return 0;
			
	}
public:
	MyClass()
	{
		//Конструктор по умолчанию
		angle = 1;
		module = 1;
	}

	MyClass(double angl, double modul)
	{
		//конструктор преобразования базового типа к типу, определяемому разрабатываемым классом
		angle = angl;
		module = modul;
	}

	MyClass(double angl)
	{
		//конструктор преобразования базового типа к типу, определяемому разрабатываемым классом
		angle = angl;
		module = 0;
	}


	void Input()
	{
		//Ввод
		cout << "Введите модуль вектора и угол между положиетльной осью X" << endl;
		cin >> module;
		while (cin.fail()) {
			cin.clear();
			cin.ignore(32767,'\n');
			cout << "Введите число!" << endl;
			cin >> module;	
		}
		cin >> angle;
		while (cin.fail()) {
			cin.clear();
			cin.ignore(32767,'\n');
			cout << "Введите число!" << endl;
			cin >> angle;
		}
		cout << "Число 1: " << module << " Число 2: " << angle << endl;
		Error();
	}

	void Output()
	{
		//Вывод
		Error();
		cout << "Итоговый модуль: " << module<< " Итоговый угол: " << angle << endl;
	}

	
};


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");

	MyClass obj1 = MyClass();
	MyClass obj2 = 20;
	MyClass obj3 = MyClass(5, -4);
	
	obj1.Output();
	obj2.Output();
	obj3.Output();
	obj1.Input();
	
	system("pause");
	return 0;
}