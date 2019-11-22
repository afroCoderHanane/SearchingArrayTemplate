// TemplateChar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
template<class Search>
Search search( int size)
{
	Search find;
	Search element;
	Search *arrayr = new Search[size];
	for (int i = 0; i < size; i++)
	{
		cout << " Enter array size" << endl;
		cin >> *(arrayr + i);
	}
	cout << " Element to search" << endl;
	cin >> element;
	for (int j = 0; j < size; j++)
	{
		if (element == arrayr[j])
			find = j;
		else
		{
			find = 0;
		}
	}
	if (find == 0)
		cout << " The number you entered is inexistant" << endl;
	else
	return find;
	delete[]arrayr;
}

int main()
{  
	int a = 5;


	search<int>( a);
	return 0;
}


