#include "CDonThuc.h"

istream& operator >> (istream& c, CDonThuc& a) {
	cout << "Nhap he so: ";
	c >> a.heso;
	cout << "Nhap so mu: ";
	c >> a.somu;
	return c;
}
ostream& operator << (ostream& c, CDonThuc a) {
	c << "Don thuc la: ";
	if (a.somu == 0) cout << a.heso << endl;
	else if (a.somu == 1) cout << a.heso << "x" << endl;
	else cout << a.heso << "x^" << a.somu << endl;
	return c;
}

bool CDonThuc::operator==(const CDonThuc& other)
{
	return  heso == other.heso && somu == other.somu;
}

bool CDonThuc::operator!=(const CDonThuc& other)
{
	return (heso != other.heso) || (somu != other.somu);
}
