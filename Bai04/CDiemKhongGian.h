#pragma once
#include<iostream>;
using namespace std;
class CDiemKhongGian
{
private:
	double x, y, z;
public:
	CDiemKhongGian() {}
	friend istream& operator >> (istream&, CDiemKhongGian&);
	friend ostream& operator << (ostream&, CDiemKhongGian);
	bool operator ==(const CDiemKhongGian&);
	bool operator !=(const CDiemKhongGian&);


};

