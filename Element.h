#pragma once

template <class T>
class Element
{
private:
	T val;
	Element<T>* adr;

public:
	T& getVal();
	Element<T>* getAdr();
	void setVal(T val);
	void setAdr(Element<T>* adr);
};

#include"Element.inl"