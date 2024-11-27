#include<iostream>
using namespace std;
int h(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return 2 * (h(n - 1) + 1);
	}
}
int main() {
	cout << h(10);
	return 0;
}