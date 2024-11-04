#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
	char a;
	cin >> a;
	if ('a' <= a && a <= 'z') cout << char(a - 32);
	else cout << int(a);
	system("pause");
	return 0;
}