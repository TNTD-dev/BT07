#include <iostream>
#include "CHonSo.h"
using namespace std;

int main()
{
	CHonSo a, b;
	cout << "Nhap hon so a: \n";
	cin >> a;
	cout << "\nNhap hon so b: \n";
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