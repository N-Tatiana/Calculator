// Calculator.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>

//using namespace System;
using namespace std;
int main ()
{
	setlocale (LC_ALL, "rus");
	bool Calculator();
	bool work;
	while (!work)
	{
		work = Calculator();	
	}
system ("pause");
return 0;
}
	void Error()
	{
		cout<<endl;
		cin.clear();
		cout<<"Вводим только цифры! Еще раз, пожалуйста!";
		cout<<endl;
		//system("cls");
		//cin.clear();
        //_flushall();
		while(cin.get() != '\n');
		system ("pause");
	}
	
	void Sum ()
	{
		double frst_numb, secnd_numb;
		cout<<"Введите первое число: "; cin>>frst_numb;
		if (cin)
			{
				cout<<"Введите второе число: ";  cin>>secnd_numb; cout<<endl;
				if (cin)

						cout<<frst_numb <<" + " <<secnd_numb<< " = "<<frst_numb+secnd_numb<<endl; 

				else Error();
			}
		else Error();cout<<endl;
		 
	}
	
	void Sub ()
	{
		double frst_numb, secnd_numb;
		cout<<"Введите первое число: "; cin>>frst_numb;
		if (cin)
			{
				cout<<"Введите второе число: ";  cin>>secnd_numb; cout<<endl;
				if (cin)
				{
					cout<<endl;	
					cout<<frst_numb <<" - " <<secnd_numb<< " = "<<frst_numb-secnd_numb<<endl; 
					cout<<endl;
				}
				else Error();
			}
		else Error();cout<<endl;
	}
		void Mul ()
	{
		double frst_numb, secnd_numb;
		cout<<"Введите первое число: "; cin>>frst_numb;
		if (cin)
			{
				cout<<"Введите второе число: ";  cin>>secnd_numb; cout<<endl;
				if (cin)

						cout<<frst_numb <<" * " <<secnd_numb<< " = "<<frst_numb*secnd_numb<<endl; 

				else Error();
			}
		else Error();cout<<endl;
		
	}

		void Div ()
	{
		double frst_numb, secnd_numb, zero_num;
		cout<<"Введите первое число: "; cin>>frst_numb;
		if (cin)
			{
				cout<<"Введите второе число: ";  cin>>secnd_numb; cout<<endl;
				if (cin)
					{	if (secnd_numb!=0)
						cout<<frst_numb<<" / "<<secnd_numb<<" = "<<frst_numb/secnd_numb;
						else cout<<"На ноль делить нельзя"<<endl;}
				else Error();
			}
		else Error();cout<<endl;
	}
	void	Sqrt()
		{
			double frst_numb, secnd_numb;
			cout<<"Введите число: "; cin>>frst_numb;
			if (cin)
				{
					cout<<"Введите степень: ";  cin>>secnd_numb; cout<<endl;
					if (cin)
						cout<<frst_numb <<" ^ " <<secnd_numb<< " = "<<pow(frst_numb,secnd_numb)<<endl; 
					else Error();
				}
		else Error();cout<<endl;
		}

bool Calculator()
{
	int menu;
	cout<<endl;
	cout<<"Выберите арифметическую операцию-->"<<endl;
	cout<<"1 - сложение"<<endl;
	cout<<"2 - вычитание"<<endl;
	cout<<"3 - умножение"<<endl;
	cout<<"4 - деление"<<endl;
	cout<<"5 - возведение в степень"<<endl;
	cout<<"6 - выход"<<endl;
	cout<<endl;
	cin>>menu;


	if (menu==1)
		Sum();
	else if (menu==2)
		Sub();
	else if (menu==3)
		Mul();
	else if (menu==4)
		Div();
	else if (menu==5)
		Sqrt();
	else if (menu<=1 || menu>6)
		cout<<"Неверный выбор ((( Попробуйте еще раз, пожалуйста!"<<endl;
	else if (menu==6)
		return true;

return false;
}





//int main(array<System::String ^> ^args)
//{
//   // Console::WriteLine(L"Здравствуй, мир!");
//
//
//    system ("pause");
//	return 0;
//
//}
