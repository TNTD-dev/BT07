#include <iostream>
#include "CSoPhuc.h"
using namespace std;

int main()
{
	CSoPhuc a, b;
	cout << "Nhap so phuc a: \n";
	cin >> a;
	cout << "\nNhap so phuc b: \n";
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