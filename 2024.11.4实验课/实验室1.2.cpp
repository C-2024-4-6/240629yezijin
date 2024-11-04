#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
	float r, h, v;
	const float pi = 3.14;
	cin >> r >> h;
	v = pi * r * r * h / 3;
	cout << v;
	return 0;
}