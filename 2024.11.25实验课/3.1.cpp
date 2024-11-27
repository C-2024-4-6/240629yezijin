#include<iostream>
#include<cmath>
using namespace std;
int gy(int& m, int& n) {
	int a, b, c;
	a = max(m, n);
	b = min(m, n);
	c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	if (c == 0) {
		return b;
	}
}
int gb(int& a, int& b, int& c) {
	return b * c / a;
}
int main() {
	int m, n, gys;
	cin >> m >> n;
	gys = gy(m, n);
	cout << "最大公约数：" << gys << endl;
	cout << "最小公倍数：" << gb(gys, m, n) << endl;
	return 0;
}