#include "Workers.h"

Workers::Workers()
{
	post[0] = '\0';
	salary[0] = '\0';
	//address[0] = '\0';

	adr.city[0] = '\0';
	adr.street[0] = '\0';
	adr.home[0] = '\0';
	adr.flat[0] = '\0';

	telephone[0] = '\0';

	FIO.firstName[0] = '\0';
	FIO.lastName[0] = '\0';
	FIO.patronymic[0] = '\0';

}

Workers::Workers(int flag)
{
	this->setDATA();
}

void Workers::show()
{
	std::cout << "Firstname: ";
	std::cout << this->FIO.firstName;
	std::cout << "\n";

	std::cout << "Lastname: ";
	std::cout << this->FIO.lastName;
	std::cout << "\n";

	std::cout << "Patronymic: ";
	std::cout << this->FIO.patronymic;
	std::cout << "\n";

	std::cout << "Post: ";
	std::cout << this->post;
	std::cout << "\n";


	std::cout << "Salary: ";
	std::cout << this->salary;
	std::cout << "\n";

	std::cout << "Address: ";

	std::cout << "City: ";
	std::cout << this->adr.city;
	std::cout << "\n";

	std::cout << "Street: ";
	std::cout << this->adr.street;
	std::cout << "\n";

	std::cout << "Home: ";
	std::cout << this->adr.home;
	std::cout << "\n";

	std::cout << "Flat: ";
	std::cout << this->adr.flat;
	std::cout << "\n";

	std::cout << "Telephone: ";
	std::cout << this->telephone;
	std::cout << "\n";
}



void Workers::changeDATA()
{

	this->show();
	this->changeDATA();

}

void Workers::setDATA()
{
	std::cout << "Enter firstname: ";
	std::cin >> this->FIO.firstName;
	std::cout << "\n";

	std::cout << "Enter lastname: ";
	std::cin >> this->FIO.lastName;
	std::cout << "\n";

	std::cout << "Enter patronymic: ";
	std::cin >> this->FIO.patronymic;
	std::cout << "\n";

	std::cout << "Enter post: ";
	std::cin >> this->post;
	std::cout << "\n";


	std::cout << "Enter salary: ";
	std::cin >> this->salary;
	std::cout << "\n";

	std::cout << "Enter address\n";

	std::cout << "Enter city: ";
	std::cin >> this->adr.city;
	std::cout << "\n";

	std::cout << "Enter street: ";
	std::cin >> this->adr.street;
	std::cout << "\n";

	std::cout << "Enter home: ";
	std::cin >> this->adr.home;
	std::cout << "\n";

	std::cout << "Enter flat: ";
	std::cin >> this->adr.flat;
	std::cout << "\n";


	std::cout << "Enter telephone: ";
	std::cin >> this->telephone;
	std::cout << "\n";
}
