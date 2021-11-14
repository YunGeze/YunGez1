#pragma once
#include<iostream>
#include<string>
#include<fstream>

class Fabric
{

	virtual void show() = 0;
	//virtual void save() = 0;
	virtual void changeDATA() = 0;
	virtual void setDATA() = 0;

};

