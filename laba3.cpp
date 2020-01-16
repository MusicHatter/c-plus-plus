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
	
	1.	��� ������������ � ������� �����-������ - ����� ������, ����������  ������ ������.*/

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


	void Input()
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

	void Output()
	{
		//�����
		Error();
		cout << "�������� ������: " << module<< " �������� ����: " << angle << endl;
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