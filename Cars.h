#pragma once
#include "Fabric.h"
class Cars :
	public Fabric
{
	char carBrend[64];
	char model[64];
	char gosNumber[64];

public:
	Cars();
	Cars(int flag);
	void show() override;
	//void save()override;
	void changeDATA() override;
	void setDATA() override;

};

