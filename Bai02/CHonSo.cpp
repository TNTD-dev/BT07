#include "CHonSo.h"


istream& operator >> (istream& c, CHonSo& a)
{
	cout << "Nhap phan nguyen: ";
	c >> a.nguyen;
	cout << "Nhap tu so: ";
	c >> a.tu;
	cout << "Nhap mau so: ";
	c >> a.mau;
	return c;
}

ostream& operator << (ostream& c, CHonSo a)
{
	c << "Hon so la: " << a.nguyen << " " << a.tu << "/" << a.mau << endl;
	return c;
}

bool operator>(const CHonSo& a, const CHonSo& b)
{
	int a_tu = a.nguyen * a.mau + a.tu;
	int b_tu = b.nguyen * b.mau + b.tu;
	return (a_tu * b.mau > b_tu * a.mau);
}

bool operator<(const CHonSo& a, const CHonSo& b)
{
	int a_tu = a.nguyen * a.mau + a.tu;
	int b_tu = b.nguyen * b.mau + b.tu;
	return (a_tu * b.mau < b_tu * a.mau);
}

bool operator==(const CHonSo& a, const CHonSo& b)
{
	int a_tu = a.nguyen * a.mau + a.tu;
	int b_tu = b.nguyen * b.mau + b.tu;
	return (a_tu * b.mau == b_tu * a.mau);
}

bool CHonSo::operator>(const CHonSo&)
{
	return false;
}

bool CHonSo::operator<(const CHonSo&)
{
	return false;
}

bool CHonSo::operator==(const CHonSo&)
{
	return false;
}
