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

	friend MyClass Input();
	friend void Output(MyClass obj);
};


MyClass Input()
	{
		//����
		MyClass obj;
		int module, angle;
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
		//obj.Error();
		obj.angle = angle;
		obj.module = module;
		Output(obj);
		return obj;
	}

void Output(MyClass obj)
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

	Output(obj1);
	Output(obj2);
	Output(obj3);
	Input();

	system("pause");
	return 0;
}
