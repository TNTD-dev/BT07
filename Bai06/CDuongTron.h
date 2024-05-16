#pragma once
#include<iostream>;
using namespace std;

class CDuongTron
{
private:
	double  x, y, r;
public:
	CDuongTron() {}
	friend istream& operator >> (istream&, CDuongTron&);
	friend ostream& operator << (ostream&, CDuongTron);

	friend bool operator > (const CDuongTron&, const CDuongTron&);
	friend bool operator < (const CDuongTron&, const CDuongTron&);
	friend bool operator == (const CDuongTron&, const CDuongTron&);
};