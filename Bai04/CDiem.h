#pragma once
#include<iostream>
using namespace std;
class CDiem
{
private:
	double x, y;
public:
	CDiem() {};
	friend istream& operator >> (istream&, CDiem&);
	friend ostream& operator << (ostream&, CDiem);
	bool operator ==(const CDiem&);
	bool operator !=(const CDiem&);

};

