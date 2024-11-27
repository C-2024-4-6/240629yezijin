#include<iostream>
#include<cstring>
using namespace std;
int parseHex(const char* const hexString) {
	int a = strlen(hexString), ans = 0, x = 1;
	for (int i = a - 1; i >= 0; i--) {
		if (hexString[i] >= '0' && hexString[i] < '9') {
			x = 1;
			for (int j = i + 1; j <= a - 1; j++)
				x *= 16;
			ans += (hexString[i] - '0') * x;
		}
		if (hexString[i] >= 'A' && hexString[i] <= 'F') {
			for (int j = i + 1; j <= a - 1; j++)
				x *= 16;
			ans += (hexString[i] - 'A' + 10) * x;
		}
	}
	return ans;
}
	int main() {
		char a[100], c;
		int i = 0;
		while ((c = getchar()) != '\n')
			a[i++] = c;
		a[i] = '\0';
		cout << parseHex(a) << endl;
		return 0;
	}