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

	friend bool operator > (const CDiem&, const CDiem&);
	friend bool operator < (const CDiem&, const CDiem&);
	friend bool operator == (const CDiem&, const CDiem&);
};