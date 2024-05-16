#pragma once
#include<iostream>;
using namespace std;

class CDonThuc
{
private:
	int heso;
	int somu;
public:
	CDonThuc() {}
	friend istream& operator >> (istream&, CDonThuc&);
	friend ostream& operator << (ostream&, CDonThuc);
	bool operator==(const CDonThuc&);
	bool operator!=(const CDonThuc&);
};


