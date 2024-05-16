#include "CDuongThang.h"
istream& operator >> (istream& c, CDuongThang& d) {
	cout << "Nhap he so a:";
	c >> d.a;
	cout << "Nhap he so b: ";
	c >> d.b;
	cout << "Nhap he so c: ";
	c >> d.c;
	return c;
}
ostream& operator << (ostream& c, CDuongThang d) {
	c << "Duong thang d la: " << (d.a > 0 ? "+" : "") << d.a << "x" << (d.b > 0 ? "+" : "") << d.b << "y" << (d.c > 0 ? "+" : "") << d.c << "=0" << endl;
	return c;
}

bool CDuongThang::operator==(const CDuongThang& other)
{
	return a == other.a && b == other.b && c == other.c;
}

bool CDuongThang::operator!=(const CDuongThang& other)
{
	return (a != other.a) || (b != other.b) || (c != other.c);
}
