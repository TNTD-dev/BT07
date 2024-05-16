#include "CHinhCau.h"

istream& operator >> (istream& c, CHinhCau& a) {
	cout << "Nhap toa do tam x: ";
	c >> a.x;
	cout << "Nhap toa do tam y: ";
	c >> a.y;
	cout << "Nhap toa do tam z: ";
	c >> a.z;
	cout << "Nhap ban kinh: ";
	c >> a.r;
	return c;

}
ostream& operator << (ostream& c, CHinhCau a) {
	c << "Hinh cau co tam la: (" << a.x << "," << a.y << "," << a.z << ")" << endl;
	c << "Ban kinh la: " << a.r << endl;
	return c;
}

bool CHinhCau::operator==(const CHinhCau& other)
{
	return x == other.x && y == other.y && z == other.z && r == other.r;
}

bool CHinhCau::operator!=(const CHinhCau& other)
{
	return !(x == other.x && y == other.y && z == other.z && r == other.r);
}
