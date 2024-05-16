#pragma once
#include<iostream>;
using namespace std;

class CNgay
{
private:
	int ngay;
	int thang;
	int nam;
public:
	CNgay() {}
	friend istream& operator >> (istream&, CNgay&);
	friend ostream& operator << (ostream&, CNgay);
	bool operator==(const CNgay&);
	bool operator!=(const CNgay&);
};

