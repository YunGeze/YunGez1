#include"FunctionsForLab.h"

template <class T>
void save(T& a, std::string name) {


	std::ofstream fout;
	fout.open(name, std::ofstream::app);
	if (fout.is_open()) {
		T obj = a;
		fout.write((char*)&obj, sizeof(T));
	}
	else {
		std::cout << "file " << name << " not open\n";
	}
	fout.close();

}

template<class T>
inline List<T> recovery(T a, std::string name)
{


	std::ifstream fin;
	List<T> MyList;
	fin.open(name);
	if (!fin.is_open()) {

		std::cout << "not open " << name << std::endl;
	}
	else {
		int i = 0;
		T obj;
		while (fin.read((char*)&obj, sizeof(T))) {
			std::cout << "[" << i << "]:" << std::endl;
			obj.show();
			MyList.append(T(obj));
			i++;
		}
		std::cout << std::endl;
	}
	fin.close();
	return List<T>(MyList);

}

template<class T>
void inputMy(T& m) {

	string text(" ");
	int sz = sizeof(T);
	if (sz == 4)
		text = " integer number";

	while (cin.fail()) {
		cin.clear();
		cin.ignore();

		cout << "Enter" << text << " - ";
		cin >> m;
	}
}

