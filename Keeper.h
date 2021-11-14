#pragma once
#include<iostream>
#include<string>
#include"FunctionsForLab.h"
#include"List.h"
#include"Furniture.h"
#include"Workers.h"
#include"Cars.h"
using namespace std;
class Keeper
{

	List<Furniture> Fur;
	List<Workers> Wor;
	List<Cars> Car;

public:
	Keeper();

	void addFur();
	void addWor();
	void addCar();

	void remFur(int i);
	void remWor(int i);
	void remCar(int i);

	void changeFur(int i);
	void changeWor(int i);
	void changeCar(int i);


	void show();
	void showFur();
	void showWor();
	void showCar();


	int getCntFur();
	int getCntWor();
	int getCntCar();

	void saves();

};

