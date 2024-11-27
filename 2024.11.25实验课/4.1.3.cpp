#include<iostream>
using namespace std;
int main() {
	bool a[101] = { 0 };
	for (int i = 1; i <= 100; i++) {
		for (int j = i; j <= 100;) {
			if (a[j] == 0) a[j] = 1;
			else a[j] = 0;
			j=i+j;
		}
	}
	for (int i = 1; i <= 100; i++) {
		if(a[i]==1) cout << i << " ";
	}
	return 0;
}