#pragma once
#include<iostream>;
using namespace std;

class CSoPhuc
{
private:
	int thuc;
	int ao;
public:
	CSoPhuc() {}
	friend istream& operator >> (istream&, CSoPhuc&);
	friend ostream& operator << (ostream&, CSoPhuc);

	friend bool operator > (const CSoPhuc&, const CSoPhuc&);
	friend bool operator < (const CSoPhuc&, const CSoPhuc&);
	friend bool operator == (const CSoPhuc&, const CSoPhuc&);
};