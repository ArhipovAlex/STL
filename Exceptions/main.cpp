#include<iostream>
#include<exception>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	/*
	try 
	{
		throw 0;
	}
	catch (int e)
	{
		std::cerr << "Error# " << e << endl;
	}
	*/
	try
	{
		throw std::exception("throwing exception from main()");
		int a, b;
		cout << "Введите два числа "; cin >> a; cin >> b;
		cout << a / b << endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << endl;
	}
	catch (...)
	{
		//Обработчик выполняется если не подошел ни один из написанных
		//Он не уточняет ошибку
		std::cerr << "Error: Что-то пошло не так..." <<endl;
	}
}