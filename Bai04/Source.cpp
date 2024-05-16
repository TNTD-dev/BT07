#include<iostream>
#include"CDiem.h"
#include"CDiemKhongGian.h";
#include"CDonThuc.h"
#include"CDuongThang.h"
#include"CHinhCau.h"
#include"CNgay.h"
#include"CTamGiac.h"
#include"CThoiGian.h"

using namespace std;

int main() {
	CThoiGian a, b;
	cin >> a >> b;
	if (a == b) cout << "Bang nhau\n";
	else cout << "Khong bang nhau\n";
	return 0;
}
