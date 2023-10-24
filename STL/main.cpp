#include<iostream>
#include<array>
#include<vector>
//using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

template<typename T>void vector_properties(const std::vector<T>& vec);

//#define STL_ARRAY
#define STL_VECTOR

void main()
{
	setlocale(LC_ALL, "");
#ifdef STL_ARRAY
	const int N = 5;
	std::array<int, N> arr = { 3, 5, 8 };
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // STL_ARRAY

#ifdef STL_VECTOR
	std::vector<int> vec = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };
	for (int i = 0; i < vec.size(); i++)
	{
		//cout << vec.at(i) << tab;
		cout << vec[i] << tab;
	}
	cout << endl;
	vector_properties(vec);
	vec.push_back(5);
	vector_properties(vec);
#endif // STL_VECTOR

}

template<typename T>void vector_properties(const std::vector<T>& vec)
{
	cout << "Size:\t " << vec.size() << endl;
	cout << "Cpacity: " << vec.capacity() << endl;
	cout << "Max size:" << vec.max_size() << endl;
}