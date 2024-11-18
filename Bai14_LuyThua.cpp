// Bai14_LuyThua.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "Luy Thua\n";
	int so, luythua = 1, mu;
	cout << "Nhap so de tinh luy thua: "; cin >> so; 
	cout << "Nhap so mu: ";  cin >> mu;
	for (int i = 0; i < mu; i++)
	{
		luythua *= so;
	}
	cout << so << "^" << mu << " = " << luythua << endl;
	return 0;
}

