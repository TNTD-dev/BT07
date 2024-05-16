#include <iostream>
#include "CDuongTron.h"
using namespace std;

int main()
{
	CDuongTron a, b;
	cout << "Nhap duong tron a: \n";
	cin >> a;
	cout << "\nNhap duong tron b: \n";
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