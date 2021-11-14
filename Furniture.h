#pragma once
#include "Fabric.h"

class Furniture :
	public Fabric
{
	char type[64];
	char color[64];
	char material[64];
	char cost[64];

	struct Gabarits
	{
		double height = 0;
		double width = 0;
		double depth = 0;
	};

	Gabarits GB;

public:
	Furniture();
	Furniture(int flag);
	void show() override;
	//void save()override;
	void changeDATA() override;
	void setDATA() override;

};

