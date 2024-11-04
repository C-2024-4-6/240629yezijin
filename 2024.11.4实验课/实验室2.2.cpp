#include <iostream>
using namespace std;
int main() {
	float x, y;
	while (1) {
		cin >> x;
		y = 0;
		if (x > 0 && x < 1)y = 3 - 2 * x;
		if
			(x >= 1 && x < 5)y = 2 / (4 * x) + 1;
		if (x >= 5 && x < 10)y = x * x;
		cout << y << endl;
	}
	system("pause");
	return 0;
}