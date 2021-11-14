#include "Cars.h"

Cars::Cars()
{
	this->carBrend[0] = '\0';
	this->model[0] = '\0';
	this->gosNumber[0] = '\0';
}

Cars::Cars(int flag)
{

	this->setDATA();

}

void Cars::show()
{
	std::cout << "Car brend: ";
	std::cout << this->carBrend;
	std::cout << "\n";

	std::cout << "Car model: ";
	std::cout << this->model;
	std::cout << "\n";

	std::cout << "Gos number: ";
	std::cout << this->gosNumber;
	std::cout << "\n";


}

//void Cars::save()
//{
//	std::string Path = "cars.txt";
//	std::ofstream fout;
//	fout.open(Path, std::ofstream::app);
//	if (fout.is_open()) {
//
//		Cars c(1);
//		fout.write((char*)&c, sizeof(Cars));
//	}
//	else {
//		std::cout << "file " << Path << " not open\n";
//	}
//	fout.close();
//}
//
//void Cars::changeDATA()
//{
//	this->show();
//	this->setDATA();
//}

void Cars::changeDATA()
{
	//this->show();
	this->setDATA();
}

void Cars::setDATA()
{
	std::cout << "Enter the car brend: ";
	std::cin >> this->carBrend;
	std::cout << "\n";

	std::cout << "Enter model: ";
	std::cin >> this->model;
	std::cout << "\n";


	std::cout << "Enter gos number: ";
	std::cin >> this->gosNumber;
	std::cout << "\n";
}
