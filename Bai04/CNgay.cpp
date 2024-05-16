#include "CNgay.h"
istream& operator >> (istream& c, CNgay& a) {
	cout << "Nhap ngay: ";
	c >> a.ngay;
	cout << "Nhap thang: ";
	c >> a.thang;
	cout << "Nhap nam: ";
	c >> a.nam;
	return c;
}
ostream& operator << (ostream& c, CNgay a) {
	c << "Ngay la: " << (a.ngay < 10 ? "0" : "") << a.ngay << "/" << (a.thang < 10 ? "0" : "") << a.thang << "/" << (a.nam < 10 ? "0" : "") << a.nam << endl;
	return c;
}

bool CNgay::operator==(const CNgay& other)
{
	return ngay == other.ngay && thang == other.thang && nam == other.nam;
}

bool CNgay::operator!=(const CNgay& other)
{
	return !(ngay == other.ngay && thang == other.thang && nam == other.nam);
}
