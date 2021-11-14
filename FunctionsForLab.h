#pragma once
#include<string>
#include"List.h"
template<class T>
void save(T &a,std::string name);
template<class T>
List<T> recovery(T a,std::string name);
template<class T>
void inputMy(T& m);
#include"FunctionsForLab.inl"