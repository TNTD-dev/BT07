#include "CDiemKhongGian.h"

istream& operator >> (istream& c, CDiemKhongGian& a) {
	cout << "Nhap hoanh do x: ";
	c >> a.x;
	cout << "Nhap tung do y: ";
	c >> a.y;
	cout << "Nhap cao do z: ";
	c >> a.z;
	return c;
}
ostream& operator << (ostream& c, CDiemKhongGian a) {
	c << "Toa do diem la: " << a.x << " " << a.y << " " << a.z << endl;
	return c;
}

bool CDiemKhongGian::operator==(const CDiemKhongGian& other)
{
	return x == other.x && y == other.y && z == other.z;
}

bool CDiemKhongGian::operator!=(const CDiemKhongGian& other)
{
	return (x != other.x) || (y != other.y) || (z != other.z);

}
