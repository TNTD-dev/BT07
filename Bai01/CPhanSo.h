#pragma once
#include<iostream>;
using namespace std;

class CPhanSo
{
private:
	int tu;
	int mau;
public:
	CPhanSo() {};
	friend istream& operator >> (istream&, CPhanSo&);
	friend ostream& operator << (ostream&, CPhanSo);

	 bool operator > (const CPhanSo& );
	 bool operator < (const CPhanSo&);
	 bool operator == (const CPhanSo&);
};