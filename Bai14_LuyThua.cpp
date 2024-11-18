// Bai14_LuyThua.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "Luy Thua Cua So Mu 4\n";
	int so, luythua = 1, b = 4;
	cout << "Nhap so de tinh luy thua: "; cin >> so;
	for (int a = 1; a < b; a++)
	{
		luythua *= so;
	}
	cout << so << " ^4 " << " = " << luythua * so << endl;
	return 0;
}

