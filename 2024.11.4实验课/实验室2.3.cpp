#include <iostream>
using namespace std;
int main() {
	float a,b,c,l;
	while (1) {
		cin >> a >> b >> c;
		if (a + b > c && a + c > b && b + c > a) {
			l = a + b + c;
			cout << "�ܳ�Ϊ" << l << endl;
			if (a == b || a == c || b == c) cout << "�ǵ���������";
			else cout << "���ǵ���������";
		}
		else cout << "���ܹ���������";
	}
	system("pause");
	return 0;
}