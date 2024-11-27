#include<iostream>
using namespace std;
int main() {
	int a[10],b[10], n=0, ans = 1;
	cout<<"Enter ten numbers:";
	for(int i=0;i<10;i++) 
		cin >> a[i];
	b[0] = a[0];
	for (int i = 1; i < 10; i++) {
		for (int j = 0; j < i; j++) {
			if (a[i] == a[j]&&i!=j) {n = 1; break; }
		}
		if (n == 0) {
			b[ans++] = a[i];
		}
		n = 0;
	}
	cout<<"The distinct numbers are:";
	for (int i = 0; i < ans; i++)
		cout << b[i] << " ";
	return 0;
}