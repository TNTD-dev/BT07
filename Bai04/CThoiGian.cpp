#include "CThoiGian.h"
istream& operator >> (istream& c, CThoiGian& t) {
	cout << "Nhap gio: ";
	c >> t.gio;
	cout << "Nhap phut: ";
	c >> t.phut;
	cout << "Nhap giay: ";
	c >> t.giay;
	return c;
}
ostream& operator << (ostream& c, CThoiGian t) {
	c << "Thoi gian la: " << (t.gio < 10 ? "0" : "") << t.gio << ":" << (t.phut < 10 ? "0" : "") << t.phut << ":" << (t.giay < 10 ? "0" : "") << t.giay << endl;
	return c;
}

bool CThoiGian::operator==(const CThoiGian& other)
{
	return gio == other.gio && phut == other.phut && giay == other.giay;
}


bool CThoiGian::operator!=(const CThoiGian& other)
{
	return !(gio == other.gio && phut == other.phut && giay == other.giay);
}
