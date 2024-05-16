#pragma once
#include<iostream>;
using namespace std;

class CThoiGian
{
private:
	int gio;
	int phut;
	int giay;
public:
	CThoiGian() {};
	friend istream& operator >> (istream&, CThoiGian&);
	friend ostream& operator << (ostream&, CThoiGian);
	bool operator==(const CThoiGian&);
	bool operator!=(const CThoiGian&);

};

