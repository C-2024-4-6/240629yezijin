#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
	float f, c;
	printf("输入华氏温度");
	cin >> f;
	c = 5 * (f - 32) / 9;
	printf("摄氏温度为%.2f", c);
	return 0;
}