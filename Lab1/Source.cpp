#include <iostream>

using namespace std;

void main()
{
	cout << "Andrey Golubkow 515-2\n";
	cout << "Proverka prostogo chisla\n Vvedite chislo: ";
	int ch = 0;
	cin >> ch;
	while (ch < 1)
	{
		cout << "\nNevernoe chislo! Povtorite vvod:";
		cin >> ch;
	}
	bool flag = true;
	for (int i = 2; (i < ch - 1) && (flag == true); i++)
		if (ch % i == 0)
		{
			flag = false;
		}
	if (flag == true)
	{
		cout << "\nChsilo prostoe";
	}
	else
	{
		cout << "\nChsilo ne prostoe\n";
	}
	//Типы данных
	cout << "\nTipi dannih\n";
	{
		int a;
		a = 5;
		int b = 3;
		cout << "\nA=" << a << endl;
		printf("B=%d", a);
		cout << "\nSumm=" << a + b;
	}//Блок кода
	cout << "\nBlock coda\n";
	{
		int a = 0;
		a = 5;
		{
			int b = 3;
			int c = a + b;
			a = 7;
			cout << "C=" << c << endl;
		}
		int c = 5;
		cout << "c=" << c << endl;
	}
	cout << "\nVvod vivod\n";
	{//Ввод и вывод
		cout << "Hello,";
		cout << " World!\n";
		int a = 0;
		float b = 0;
		cout << "Vvedite a i b ";
		cin >> a >> b;
		b = a + b;
		cout << endl << b;
	}
	cout << "\nVetvlenie\n";
	{//Ветвление и операторы выбора
		bool flag = true;
		if (flag == true)
		{
			cout << "Flag = true\n";
		}
		else
		{
			cout << "Flag=false\n";
		}
		bool c1 = true;
		bool c2 = false;
		if (c1)
		{
			if (c2)
			{
				cout << "Istini 2 uslovia";
			}
			else
			{
				cout << "istiono 1 uslovie";
			}
		}
		else
		{
			cout << "Ne istino ne odno uslovie";
		}
		if (c1)
		{
			cout << "Pervoe uslovie istino";
		}
		else if (c2)
		{
			cout << "Vtoroe uslovie istino,pervoe lozno";
		}
		else
		{
			cout << "Oba uslovia loznie";
		}
		{
			char c = 'A';
			cout << "\nvvedite A B ili C ";
			cin >> c;
			switch (c)
			{
			case 'A':
				cout << "\nC=A" << endl;
				break;
			case 'B':
				cout << "\nC=B" << endl;
				break;
			case 'C':
				cout << "\nC=C" << endl;
				break;
			default:
				cout << "\nC=drugoe znachenie" << endl;
				break;
			}
		}
		cout << "\nCikli\n";
		{//Циклы
			int a = 0;
			while (a < 5)
			{
				cout << "\nA= " << a << endl;
				a++;
			}
		}
		{
			int a = 0;
			do
			{
				cout << a << endl;
				a++;
			} while (a < 5);
		}
		{
			for (int a = 1; a < 5; a++)
				cout << "\t" << a;
		}
		cout << "\nOperatori peredachi upravlenia\n";
		{//Операторы передачи управления
			for (int i = 1; i < 10; i++)
			{
				if (i % 2 == 0)
				{
					continue;
				}
				cout << "Nechetnoe chislo " << i << endl;
			}
			for (int i = 1; i < 10; i++)
			{
				cout << "chislo " << i << endl;
				if (i == 5)
				{
					break;
				}
			}
		}
		cout << "\nPreobrazovanie tipov dannih\n";
		{//Преобразование типов данных
			int a = 5;
			double b = 5.5;
			a = (int)b;
			cout << "a=" << a << endl;
		}
	}
}