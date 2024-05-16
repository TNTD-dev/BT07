#include <iostream>
#include "CPhanSo.h"
using namespace std;

int main()
{
	CPhanSo a, b;
	cout << "Nhap phan so a: \n";
	cin >> a;
	cout << "\nNhap phan so b: \n";
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