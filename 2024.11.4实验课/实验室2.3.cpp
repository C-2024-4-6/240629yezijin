#include <iostream>
using namespace std;
int main() {
	float a,b,c,l;
	while (1) {
		cin >> a >> b >> c;
		if (a + b > c && a + c > b && b + c > a) {
			l = a + b + c;
			cout << "周长为" << l << endl;
			if (a == b || a == c || b == c) cout << "是等腰三角形";
			else cout << "不是等腰三角形";
		}
		else cout << "不能构成三角形";
	}
	system("pause");
	return 0;
}