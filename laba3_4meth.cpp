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
	� ���� ����� �������� � ������������� ������������ ��� X*/

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
MyClass()
	{
		//����������� �� ���������
		angle = 1;
		module = 1;
	}

MyClass(double angl, double modul)
	{
		//����������� �������������� �������� ���� � ����, ������������� ��������������� �������
		angle = angl;
		module = modul;
	}

MyClass(double angl)
	{
		//����������� �������������� �������� ���� � ����, ������������� ��������������� �������
		angle = angl;
		module = 0;
	}

	friend void Input(MyClass &obj);
	friend void Output(MyClass &obj);
};


void Input(MyClass &obj)
	{
		//����
		cout << "������� ������ ������� � ���� ����� ������������� ���� X" << endl;
		cin >> obj.module;
		while (cin.fail()) {
			cin.clear();
			cin.ignore(32767,'\n');
			cout << "������� �����!" << endl;
			cin >> obj.module;	
		}
		cin >> obj.angle;
		while (cin.fail()) {
			cin.clear();
			cin.ignore(32767,'\n');
			cout << "������� �����!" << endl;
			cin >> obj.angle;
		}
		cout << "����� 1: " << obj.module << " ����� 2: " << obj.angle << endl;
		obj.Error();
	}

void Output(MyClass &obj)
	{
		//�����
		obj.Error();
		cout << "�������� ������: " << obj.module<< " �������� ����: " << obj.angle << endl;
	}


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");

	MyClass obj1 = MyClass();
	MyClass obj2 = 20;
	MyClass obj3 = MyClass(5, 8);
	MyClass obj4 = MyClass();
	
	Input(obj4);
	Output(obj1);
	Output(obj2);
	Output(obj3);
	Output(obj4);

	system("pause");
	return 0;
}
