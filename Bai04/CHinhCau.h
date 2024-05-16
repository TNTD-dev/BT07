#pragma once
#include<iostream>;
using namespace std;

class CHinhCau
{
private:
	double  x, y, z, r;
public:
	CHinhCau() {}
	friend istream& operator >> (istream&, CHinhCau&);
	friend ostream& operator << (ostream&, CHinhCau);
	bool operator==(const CHinhCau&);
	bool operator!=(const CHinhCau&);
};

