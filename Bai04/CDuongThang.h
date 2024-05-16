#pragma once
#include<iostream>;
using namespace std;

class CDuongThang
{
private:
	double a, b, c;
public:
	CDuongThang() {}
	friend istream& operator >> (istream&, CDuongThang&);
	friend ostream& operator << (ostream&, CDuongThang);
	bool operator==(const CDuongThang&);
	bool operator!=(const CDuongThang&);
};

