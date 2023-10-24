#include<iostream>
#include<map>
#include<set>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"
#define delimiter "\n-------------------------------\n"

//#define STL_SET

void main()
{
	setlocale(LC_ALL, "");
#ifdef STL_SET
	std::multiset<int> set = { 50,25,75,16,32,64,80 };
	for (std::set<int>::iterator it = set.begin(); it != set.end(); ++it)
	{
		cout << *it << tab;
	}
	cout << endl;

#endif //STL_SET

	//map - контейнер, каждый элемент которого содержит пару "ключ-значение"
	//std::pair<key, value>
	std::map<int, std::string> week =
	{
		std::pair<int,std::string>(0,"Sunday"),
		std::pair<int,std::string>(0,"Sunday"),
		std::pair<int,std::string>(0,"Sunday"),
		std::pair<int,std::string>(0,"Sunday"),
		std::pair<int,std::string>(1,"Monday"),
		std::pair<int,std::string>(2,"Tuesday"),
		{3,"Wensday"},
		{4,"Thursday"},
		{5,"Friday"},
		{5,"Friday"},
		{5,"Friday"},
		{5,"Friday"},
		{5,"Friday"},
		{6,"Saturday"},
		{6,"Saturday"},
		{6,"Saturday"},
		{6,"Saturday"},
		{6,"Saturday"},
		std::pair<int,std::string>(7,"Sunday"),
	};
	for (std::map<int, std::string>::iterator it = week.begin(); it != week.end(); ++it)
	{
		cout << it->first << tab << it->second << endl;
	}
}