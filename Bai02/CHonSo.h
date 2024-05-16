#pragma once
#include<iostream>
using namespace std;

class CHonSo
{
private:
	int nguyen, tu, mau;
public:
	CHonSo() {};
	friend istream& operator >> (istream&, CHonSo&);
	friend ostream& operator << (ostream&, CHonSo);

	 bool operator > (const CHonSo&);
	 bool operator < (const CHonSo&);
	 bool operator == (const CHonSo&);
};