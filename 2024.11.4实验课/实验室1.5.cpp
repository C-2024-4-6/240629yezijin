#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
	float f, c;
	printf("���뻪���¶�");
	cin >> f;
	c = 5 * (f - 32) / 9;
	printf("�����¶�Ϊ%.2f", c);
	return 0;
}