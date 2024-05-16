#pragma once
#include<iostream>
#include"CDiem.h"
using namespace std;

class CTamGiac
{
private:
	CDiem a, b, c;
public:
	CTamGiac() {}
	friend istream& operator >> (istream&, CTamGiac&);
	friend ostream& operator << (ostream&, CTamGiac);
	bool operator==(const CTamGiac&);
	bool operator!=(const CTamGiac&);
};

