#include <iostream>
#include "CDiem.h"
using namespace std;

int main()
{
	CDiem a, b;
	cout << "Nhap diem a: \n";
	cin >> a;
	cout << "\nNhap diem b: \n";
	cin >> b;
	cout << endl;

	if (a > b)
		cout << "a > b" << endl;
	else if (a < b)
		cout << "a < b" << endl;
	else if (a == b)
		cout << "a = b" << endl;
	return 0;
}