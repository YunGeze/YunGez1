#pragma once
#include "Fabric.h"
class Workers :
	public Fabric
{
	char post[64];
	char salary[64];
	char telephone[64];

	struct Adress {

		char city[64];
		char street[64];
		char home[64];
		char flat[64];

	};
	struct WorkersData
	{
		char firstName[64];
		char lastName[64];
		char patronymic[64];
	};
	Adress adr;
	WorkersData FIO;

public:
	Workers();
	Workers(int flag);
	void show() override;
	//void save()override;
	void changeDATA() override;
	void setDATA() override;

};

