#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
	int d=0,sum=2,i=2;
	float a = 0.8, m = 0;
	while (sum <= 100) {
		m = m + a * i;
		i = i * 2;
		sum += i;
		d++;
	}
	cout << m / d;
	return 0;
}