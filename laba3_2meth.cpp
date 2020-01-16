// laba3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

/*	��� ���������� �������� ���������� �����, ������� � ����
	- ����������� �� ���������
	- ����������� �������������
	- ����������� �������������� �������� ���� � ����, ������������� ��������������� �������
	- ������� ��� ����� ������ ������
	- ������� ��� ������ ������ ������
	- �������, ��������� ��������� �� ������ - ������� ������� ������ 
	  � ����������� ������� (�������� ���� ������)

8. ����� "������ �� ���������" � ������� ������ �������
	� ���� ����� �������� � ������������� ������������ ��� X
	
	2. ������������ � ������� �����-������ - ����� ������, ������� �� ����� ���� ���������� ��� 
	����������, ���������� ��� ������*/

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
		//������ ������ ��������� �� ������. (���� - ����� ����� �����, ������ ������� �������������)
		if (module < 0) {
			cout << "������! ������ ������ ���� ������ ��� ����� 0. ����������� ��������������" << endl;
			module = module * -1;
		}
		if ( (double)( (int) angle ) != angle) {
			cout << "������! ���� ������ ���� ����� ������. ����������� ��������������" << endl;
			MyClass MD1(angle);
		}
		return 0;
			
	}
public:
	MyClass();
	MyClass(double angl, double modul);
	MyClass(double angl);

	void Input();
	void Output();

	
};

MyClass::MyClass()
	{
		//����������� �� ���������
		angle = 1;
		module = 1;
	}

MyClass::MyClass(double angl, double modul)
	{
		//����������� �������������� �������� ���� � ����, ������������� ��������������� �������
		angle = angl;
		module = modul;
	}

MyClass::MyClass(double angl)
	{
		//����������� �������������� �������� ���� � ����, ������������� ��������������� �������
		angle = angl;
		module = 0;
	}


void MyClass::Input()
	{
		//����
		cout << "������� ������ ������� � ���� ����� ������������� ���� X" << endl;
		cin >> module;
		while (cin.fail()) {
			cin.clear();
			cin.ignore(32767,'\n');
			cout << "������� �����!" << endl;
			cin >> module;	
		}
		cin >> angle;
		while (cin.fail()) {
			cin.clear();
			cin.ignore(32767,'\n');
			cout << "������� �����!" << endl;
			cin >> angle;
		}
		cout << "����� 1: " << module << " ����� 2: " << angle << endl;
		Error();
	}

void MyClass::Output()
	{
		//�����
		Error();
		cout << "�������� ������: " << module<< " �������� ����: " << angle << endl;
	}


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");

	MyClass obj1 = MyClass();
	MyClass obj2 = 20;
	MyClass obj3 = MyClass(5, 8);
	
	obj1.Input();
	obj1.Output();
	obj2.Output();
	obj3.Output();

	system("pause");
	return 0;
}
