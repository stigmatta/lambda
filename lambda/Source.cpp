#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;
int main()
{
	//1. вывод четных в векторе
	vector <int> vec;
	for (int i = 0; i < 11; i++)
		vec.push_back(i);
	for_each(vec.begin(), vec.end(),
		[](int a)
		{
			if (a % 2 == 0)
				cout << a << ' ';
		});
	cout << endl;
	//2. удаление отрицательных элементов в векторе
	vector <int>neg_vec;
	for (int i = -10; i < 11; i++)
		neg_vec.push_back(i);
	auto it = remove_if(neg_vec.begin(), neg_vec.end(),
		[](int a)
		{
			return a < 0;
		});
	for (auto iter = neg_vec.begin(); iter != it; iter++)
		cout << *iter << ' ';
	cout << endl;
	//3. подсчет четных элементов двусвязного списка
	list<int>list_digits;
	for (int i = 0; i < 11; i++)
		list_digits.push_back(i);
	int res = count_if(list_digits.begin(), list_digits.end(),
		[](int a)
		{
			return a % 2 == 0;
		});
	cout << res;
}