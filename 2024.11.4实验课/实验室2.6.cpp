#include <iostream>
#include<cstdio>
using namespace std;
int main() {
	int a, b,gy,gb;
	cin >> a >> b;
	for (int i = 1; i <= a && i <= b; i++) {
		if (a % i == 0 && b % i == 0) gy = i;
	}
	gb = (a * b) / gy;
	cout << "最大公约数是" << gy <<endl<< "最小公倍数是" << gb<<endl;
	return 0;
}