#include "Keeper.h"
#include"FunctionsForLab.h"
Keeper::Keeper()
{
	Furniture f;
	std::cout << "------------------Furniture--------------------\n";
	Fur = recovery(f, "furnirure.txt");

	Workers w;
	std::cout << "-----------------Workers--------------------\n";
	Wor = recovery(w, "workers.txt");

	Cars c;
	std::cout << "------------------Cars--------------------\n";
	Car = recovery(c, "cars.txt");


}

void Keeper::addFur()
{
	Fur.append(Furniture(1));
	saves();
}

void Keeper::addWor()
{
	Wor.append(Workers(1));
	saves();
}

void Keeper::addCar()
{
	Car.append(Cars(1));
	saves();
}

void Keeper::remFur(int i)
{
	std::string path = "furnirure.txt";
	try {
		Fur.irase(i);
		ofstream of;
		of.open(path);
		of.close();
		saves();
	}
	catch (int a) {
		cout << "Not deleted\n";
	}

	catch (string s)
	{
		cout << s;
	}
}

void Keeper::remWor(int i)
{
	std::string path = "workers.txt";
	try {
		Wor.irase(i);
		ofstream of;
		of.open(path);
		of.close();
		saves();
		//saves();
	}
	catch (int a) {
		cout << "Not deleted\n";
	}

	catch (string s)
	{
		cout << s;
	}

}

void Keeper::remCar(int i)
{

	std::string path = "cars.txt";
	try {
		Wor.irase(i);
		ofstream of;
		of.open(path);
		of.close();
		saves();
		//saves();
	}
	catch (int a) {
		cout << "Not deleted\n";
	}

	catch (string s)
	{
		cout << s;
	}

}

void Keeper::changeFur(int i)
{

	Fur[i].changeDATA();

}

void Keeper::changeWor(int i)
{
	Wor[i].changeDATA();
	saves();
}

void Keeper::changeCar(int i)
{
	Car[i].changeDATA();
	saves();
}

void Keeper::saves()
{
	std::string path = "furnirure.txt";
	ofstream of;
	of.open(path);
	of.close();
	for (int i = 0; i < Fur.getSize(); i++) {

		save(Fur[i], path);
	}
	path = "workers.txt";
	of.open(path);
	of.close();

	for (int i = 0; i < Wor.getSize(); i++) {

		save(Wor[i], path);
	}

	path = "cars.txt";
	of.open(path);
	of.close();
	for (int i = 0; i < Car.getSize(); i++) {

		save(Car[i], path);
	}

}

void Keeper::show()
{
	this->showFur();
	this->showWor();
	this->showCar();
}

void Keeper::showFur()
{
	cout << "\n-----------------Furniture----------------\n";
	for (int i = 0; i < Fur.getSize(); i++) {
		cout << "[" << i << "]:" << endl;
		Fur[i].show();
	}
	cout << endl;
}

void Keeper::showWor()
{
	cout << "\n-----------------Workers----------------\n";
	for (int i = 0; i < Wor.getSize(); i++) {
		cout << "[" << i << "]:" << endl;
		Wor[i].show();
	}
	cout << endl;
}

void Keeper::showCar()
{
	cout << "\n-----------------Cars----------------\n";
	for (int i = 0; i < Car.getSize(); i++) {
		cout << "[" << i << "]:" << endl;
		Car[i].show();
	}
	cout << endl;
}

int Keeper::getCntFur()
{
	return Fur.getSize();
}

int Keeper::getCntWor()
{
	return Wor.getSize();
}

int Keeper::getCntCar()
{
	return Car.getSize();
}
