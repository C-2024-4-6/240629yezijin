#include<iostream>
using namespace std;
void ssort(int* a, int n) {
	for (int j = 0; j < n - 1; j++)
		for (int i = 0; i < n - 1 - j; i++) {
			if (a[i] > a[i + 1])
				swap(a[i], a[i + 1]);
		}
}
int main() {
	int n;
	int* a = new int[100];
	cout<<"输入数组长度:";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	ssort(a, n);
	for (int i = 0; i < n; i++)
		cout << *(a+i) << " ";
	delete[] a;
	return 0;
}