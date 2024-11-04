#include <iostream>
#include<cstdio>
using namespace std;
int main() {
	for (int i = 1; i <= 5; i++) {
		for (int k = 1; k <= i; k++)
			cout << "*";
		cout << '\n';
	}
	return 0;
}