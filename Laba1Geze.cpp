// Laba1Geze.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include "Furniture.h"
#include"FunctionsForLab.h"
#include"Keeper.h"
#include"List.h"

int main()
{
	setlocale(LC_ALL, "RUS");

	bool flag = true;
	bool fl = true;
	Keeper DataBase;
	int inp = 0;


	while (flag) {
		cout << "-----------MENU--------------\n";
		cout << "1. Показать количество мебели, работников, машин\n";
		cout << "2. Меню мебели\n";
		cout << "3. Меню машин\n";
		cout << "4. Меню работников\n";
		cout << "5. Выход\n";
		cout << "вы выбрали - ";

		cin >> inp;
		inputMy(inp);

		switch (inp)
		{
		case 1:
			cout << "число мебели - " << DataBase.getCntFur() << endl;
			cout << "число машин - " << DataBase.getCntCar() << endl;
			cout << "число работников - " << DataBase.getCntWor() << endl;
			DataBase.show();
			break;

		case 2:
			fl = true;
			while (fl) {
				cout << "Сейчас мебели - " << DataBase.getCntFur() << endl;
				cout << "1. Показать мебель\n";
				cout << "2. Добавить мебель\n";
				cout << "3. Удалить мебель\n";
				cout << "4. Изменить данные мебели\n";
				cout << "5. Выйти в меню\n";
				cout << "вы выбрали - ";
				cin >> inp;
				inputMy(inp);

				switch (inp)
				{
				case 1:
					DataBase.showFur();
					break;
				case 2:
					DataBase.addFur();
					break;
				case 3:
					cout << "Сейчас мебели - " << DataBase.getCntFur() << endl;
					cout << "ведите индекс мебели - ";
					cin >> inp;
					inputMy(inp);
					DataBase.remFur(inp);
					break;

				case 4:
					DataBase.showFur();
					cout << "ведите индекс мебели - ";
					cin >> inp;
					DataBase.changeFur(inp);

					break;
				default:
					fl = false;
					break;
				}
			}
			break;


		case 3:
			fl = true;
			while (fl) {
				cout << "Сейчас машин - " << DataBase.getCntCar() << endl;
				cout << "1. Показать машины\n";
				cout << "2. Добавить машины\n";
				cout << "3. Удалить машины\n";
				cout << "4. Изменить данные об авто\n";
				cout << "5. Выйти в меню\n";
				cout << "вы выбрали - ";
				cin >> inp;
				inputMy(inp);

				switch (inp)
				{
				case 1:
					DataBase.showCar();
					break;
				case 2:
					DataBase.addCar();
					break;
				case 3:
					cout << "Сейчас машины - " << DataBase.getCntCar() << endl;
					cout << "ведите индекс машины - ";
					cin >> inp;
					inputMy(inp);
					DataBase.remCar(inp);
					break;

				case 4:
					DataBase.showCar();
					cout << "ведите индекс машины - ";
					cin >> inp;
					DataBase.changeCar(inp);

					break;
				default:
					fl = false;
					break;
				}
			}
			break;

		case 4:
			fl = true;
			while (fl) {
				cout << "Сейчас работников - " << DataBase.getCntWor() << endl;
				cout << "1. Показать работников\n";
				cout << "2. Добавить работников\n";
				cout << "3. Удалить работника\n";
				cout << "4. Изменить данные о работнике\n";
				cout << "5. Выйти в меню\n";
				cout << "вы выбрали - ";
				cin >> inp;
				inputMy(inp);

				switch (inp)
				{
				case 1:
					DataBase.showWor();
					break;
				case 2:
					DataBase.addWor();
					break;
				case 3:
					cout << "Сейчас работников - " << DataBase.getCntWor() << endl;
					cout << "ведите индекс работника - ";
					cin >> inp;
					inputMy(inp);
					DataBase.remWor(inp);
					break;

				case 4:
					DataBase.showWor();
					cout << "ведите индекс работника - ";
					cin >> inp;
					DataBase.changeWor(inp);

					break;
				default:
					fl = false;
					break;
				}
			}
			break;



		case 5:
			flag = false;
			break;
		default:
			break;
		}


	}


}
