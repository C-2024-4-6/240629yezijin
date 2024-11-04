#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
	double a,x1,x2;
	cin >> a; x1 = x2 = 1;
	while (1) {
		x2 = (x1 + a / x1) / 2;
		if (fabs(x2 - x1) < 0.00001) {
			cout << x2; break;
		}
		x1 = x2;
	}
	return 0;
}