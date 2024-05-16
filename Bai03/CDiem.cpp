#include "CDiem.h"

istream& operator >> (istream& c, CDiem& a)
{
	cout << "Nhap hoanh do x: ";
	c >> a.x;
	cout << "Nhap tung do y: ";
	c >> a.y;
	return c;
}

ostream& operator << (ostream& c, CDiem a)
{
	c << "(" << a.x << "," << a.y << ")" << endl;
	return c;
}

bool operator > (const CDiem& a, const CDiem& b)
{
	return (a.x * a.x + a.y * a.y) > (b.x * b.x + b.y * b.y);
}

bool operator < (const CDiem& a, const CDiem& b)
{
	return (a.x * a.x + a.y * a.y) < (b.x * b.x + b.y * b.y);
}

bool operator == (const CDiem& a, const CDiem& b)
{
	return (a.x * a.x + a.y * a.y) == (b.x * b.x + b.y * b.y);
}
