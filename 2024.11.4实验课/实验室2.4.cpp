#include <iostream>
using namespace std;
int main() {
	float a,b;
	char s;
	while (1) {
		cout << "输入运算符号" ;
		cin >> s;
		cout << "输入两个数" << endl;
		cin >> a >> b;
		switch (s)
		{
		case'+':cout << a + b; break;
		case'-':cout << a - b; break;
		case'*':cout << a * b; break;
		case'/':if (b == 0)cout << "0不能为除数";else cout << a / b; break;
		case'%':if (b == 0)cout << "0不能为除数";
			   else if (a == int(a) && b == int(b))
			cout << int(a) % int(b);
			   else "%只能用于整型数"; break;
		default:cout << "请输入正确的运算符";
			break;
		}
		cout << endl;
	}
	system("pause");
	return 0;
} 