#pragma once
#include"List.h"
#include<iostream>
#include<string>
using namespace std;
template<class T>
inline List<T>::List()
{
	this->head = this->q = nullptr;
	this->size = 0;

}

template<class T>
inline List<T>::List(T val)
{
	this->size = 0;
	this->head = nullptr;
	Element<T>* elptr = new (Element<T>);
	elptr->setVal(val);
	elptr->setAdr(elptr);
	this->head = this->q = elptr;
	size++;
}

template<class T>
inline List<T>::List(T* arr, int size)
{
	this->size = 0;
	this->head = nullptr;
	this->q = nullptr;
	for (int i = 0; i < size; i++) {
		Element<T>* elptr = new (Element<T>), * qptr = this->head;
		if (this->size == 0) {
			elptr->setVal(arr[i]);
			elptr->setAdr(elptr);
			head = q = elptr;
		}
		else {
			elptr->setVal(arr[i]);
			while (qptr->getAdr() != this->head) //���������� �� ���������� 
				qptr = qptr->getAdr();
			qptr->setAdr(elptr);
			elptr->setAdr(this->head);
			q = elptr;
		}
		this->size++;
	}

}

template<class T>
inline List<T>::List(const List<T>& obj)
{
	this->head = nullptr;
	this->q = this->head;
	this->size = obj.size;

	Element<T>* elptrObj = obj.head;
	for (int i = 0; i < obj.size; i++) {
		Element<T>* elptr = new (Element<T>);
		if (i == 0) {
			elptr->setVal(elptrObj->getVal());
			elptr->setAdr(elptr);
			this->head = this->q = elptr;
		}
		else {
			Element<T>* hptr = this->head;
			elptr->setVal(elptrObj->getVal());
			while (hptr->getAdr() != this->head) //���������� �� ���������� 
				hptr = hptr->getAdr();
			hptr->setAdr(elptr);
			elptr->setAdr(this->head);
			this->q = elptr;
		}
		elptrObj = elptrObj->getAdr();
	}
}


template<class T>
inline List<T>::~List()
{
	try {
		if (this->head == nullptr)
			throw "error";
		Element<T>* ptr = this->head;
		int sz = this->size;
		for (int i = 0; i < sz; i++) {
			ptr = ptr->getAdr();
			delete this->head;
			this->head = ptr;
			this->size--;
		}
		this->head = this->q = nullptr;
	}

	catch (...) {
		std::cout << " ";
	}
}

template<class T>
inline int List<T>::getSize()
{
	return this->size;
}

template<class T>
inline List<T>& List<T>::operator=(const List<T>& obj)
{
	// TODO: �������� ����� �������� return
	this->head = nullptr;
	this->q = this->head;
	this->size = obj.size;

	Element<T>* elptrObj = obj.head;//������ �� ������ ������� �������� �������


	for (int i = 0; i < obj.size; i++) {

		Element<T>* elptr = new (Element<T>);
		if (i == 0) {
			elptr->setVal(elptrObj->getVal());
			elptr->setAdr(elptr);
			this->head = this->q = elptr;
		}
		else {
			Element<T>* hptr = head;
			elptr->setVal(elptrObj->getVal());
			while (hptr->getAdr() != this->head) //���������� �� ���������� 
				hptr = hptr->getAdr();
			hptr->setAdr(elptr);
			elptr->setAdr(this->head);
		}
		elptrObj = elptrObj->getAdr();

		
	}

	return *this;
}

template<class T>
inline T& List<T>::operator[](const int index)
{
	Element<T>* qptr = this->head;
	for (int i = 0; i < index; i++) {
		qptr = qptr->getAdr();
	}
	//T myObj = qptr->getVal();
	return qptr->getVal();//why i can't get object????
}

template<class T>
inline void List<T>::append(T val)
{

	Element<T>* elptr = new (Element<T>), * qptr = this->head;
	if (this->size == 0) {

		elptr->setVal(val);
		elptr->setAdr(elptr);
		this->head = this->q = elptr;
	}
	else {
		elptr->setVal(val);
		while (qptr->getAdr() != this->head) //���������� �� ���������� 
			qptr = qptr->getAdr();
		qptr->setAdr(elptr);
		elptr->setAdr(this->head);
	}
	this->size++;
}

template<class T>
inline T& List<T>::pop()
{
	try
	{
		Element<T>* qptr = this->head;
		T val;
		if (this->size == 0) {
			throw "Empty list";
		}
		else {
			while (qptr->getAdr()->getAdr() != 0this->head) //���������� �� �������������� 
				qptr = qptr->getAdr();
			val = q->getVal();
			delete q;
			q = qptr->getAdr();
			qptr->setAdr(this->head);
		}
		this->size--;
		return val;
	}
	catch (const std::exception&)
	{

	}


}
//
//template<class T>
//inline void List<T>::save()
//{
//	for (int i = 0; i < other.size; i++) {
//		Element<T>* qptr = other.head;
//		T val;
//		while (qptr->getAdr() != other.head) { //���������� �� ���������� 
//			val = qptr->getVal();
//			val.save();
//			qptr = qptr->getAdr();//��������� � ����������
//
//		}
//		val = qptr->getVal();
//		val.save();
//
//	}
//	
//}

template<class T>
inline void List<T>::irase(int index)
{
	Element<T>* qptr = this->head, * delptr = this->head;
	string s = "empty list\n";
	try
	{
		if (size == 0)
			throw s;
		if (index == 0) {//������ ������� �������
			if (this->size == 1) {//������ � ���������
				delete head;
				q = head = nullptr;
			}
			else {
				Element<T>* hptr = this->head->getAdr();

				for (int i = 0; i < this->size - 1; i++) //���������� �� ���������� 
					qptr = qptr->getAdr();//������� �� ��������� �������
				//qptr = qptr->getAdr();
				q = qptr;//����� ����������
				delete this->head;
				this->q->setAdr(hptr);//��������� ����� �������
				this->head = hptr;
			}

			size--;
		}
		else if (index == size - 1) {//��������� ������� �������
			Element<T>* qptr = this->head, * nptr;

			if (this->size == 0) {
				throw "Empty list";
			}
			else {
				for (int i = 0; i < this->size - 2; i++) //���������� �� �������������� 
					qptr = qptr->getAdr();//������� �� ��������� �������
				nptr = qptr;//�� �������������
				qptr = qptr->getAdr();//����� � ����������
				nptr->setAdr(this->head);//� ���� ������ �������������� ������� ������

				delete qptr;
				this->q = nptr;
				//qptr->setAdr(head);
			}
			this->size--;
		}
		else if (index >= this->size)
			throw 1;
		else {
			Element<T>* qptrLast;
			for (int i = 0; i < index - 1; i++) {
				qptr = qptr->getAdr();//����� ���������
			}//�� ����������	
			qptrLast = qptr;//��������� ����� i-1
			qptr = qptr->getAdr();	//������� � i
			qptrLast->setAdr(qptr->getAdr());//� ��������� i-1 � i+1
			delete qptr;
			this->size--;

		}
	}

	catch (const std::exception&)
	{

	}




	//delptr = qptr;//��������� ����� ���������� ��������


}


template<class T>
inline std::ostream& operator<<(std::ostream& out, const List<T>& other)
{
	for (int i = 0; i < other.size; i++) {
		Element<T>* qptr = other.head;


		while (qptr->getAdr() != other.head) { //���������� �� ���������� 
			out << qptr->getVal() << " ";
			qptr = qptr->getAdr();

		}
		out << qptr->getVal() << "\n";

		return out;
	}

}
