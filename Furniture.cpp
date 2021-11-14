#include "Furniture.h"

Furniture::Furniture()
{
	type[0] = '\0';
	color[0] = '\0';
	material[0] = '\0';
	cost[0] = '\0';

	GB.depth = 0;
	GB.height = 0;
	GB.width = 0;
}

Furniture::Furniture(int flag)
{
	this->setDATA();
}

void Furniture::show()
{
	std::cout << "Type: ";
	std::cout << type;
	std::cout << "\n";


	std::cout << "Color: ";
	std::cout << color;
	std::cout << "\n";

	std::cout << "Material: ";
	std::cout << material;
	std::cout << "\n";

	std::cout << "Cost: ";
	std::cout << cost;
	std::cout << "\n";

	std::cout << "Height: ";
	std::cout << GB.height;
	std::cout << "\n";

	std::cout << "Width: ";
	std::cout << GB.width;
	std::cout << "\n";

	std::cout << "Depth: ";
	std::cout << GB.depth;
	std::cout << "\n";
}


void Furniture::changeDATA()
{
	//this->show();
	this->setDATA();
}

void Furniture::setDATA()
{
	int i = 0;
	std::string str = "";
	std::cout << "Enter type: ";

	std::cin >> str;
	do {
		this->type[i] = str[i];
		i++;
	} while (i < str.length());
	this->type[i] = '\0';

	std::cout << "Enter color: ";
	std::cin >> str;
	i = 0;
	do {
		this->color[i] = str[i];
		i++;
	} while (i < str.length());
	this->color[i] = '\0';

	std::cout << "Enter material: ";
	std::cin >> str;
	i = 0;
	do {
		this->material[i] = str[i];
		i++;
	} while (i < str.length());
	this->material[i] = '\0';

	std::cout << "Enter cost: ";
	std::cin >> str;
	i = 0;
	do {
		this->cost[i] = str[i];
		i++;
	} while (i < str.length());
	this->cost[i] = '\0';

	std::cout << "Enter height: ";
	std::cin >> this->GB.height;
	std::cout << "\n";

	std::cout << "Enter width: ";
	std::cin >> this->GB.width;
	std::cout << "\n";

	std::cout << "Enter depth: ";
	std::cin >> this->GB.depth;
	std::cout << "\n";
}
