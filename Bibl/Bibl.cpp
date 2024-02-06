// Bibl.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

vector<int> vec;


template <class T>
class lisst {
	list<T> lis;
public:

	void push_back(T& t) {
		lis.push_back(t);
	}

	int size() {
		return lis.size();
	}

	T& operator[](int j) {
		auto i_it = lis.begin();
		for (int i = 0; i < j; i++, i_it++) {}
		return *i_it;
	}
};

int main()
{
	map<string, string> mp;

	vector<int> vec;

	mp["a"] = "aaa";
	mp["b"] = "bbb";
	mp["c"] = "ccc";
	mp["a"] = "sss";
	cout << mp["a"] << endl;

	pair<string, string> element("s", "52");

	mp.insert(element);

	pair<string, string> mp_pair("f", "52");

	pair<map<string, string>::iterator, bool> err = mp.insert(element);

	cout << err.first->first << "   " << err.first->second << endl;

	if (err.second == false) {
		cout << "err" << endl;
	}

	map<string, string>::iterator it = mp.begin();
	for (; it != mp.end(); it++) {
		cout << "key " << it->first << " Value " << it->second << endl;
	}



}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
