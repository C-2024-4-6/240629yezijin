#include <iostream>
using namespace std;
int main() {
	float a,b;
	char s;
	while (1) {
		cout << "�����������" ;
		cin >> s;
		cout << "����������" << endl;
		cin >> a >> b;
		switch (s)
		{
		case'+':cout << a + b; break;
		case'-':cout << a - b; break;
		case'*':cout << a * b; break;
		case'/':if (b == 0)cout << "0����Ϊ����";else cout << a / b; break;
		case'%':if (b == 0)cout << "0����Ϊ����";
			   else if (a == int(a) && b == int(b))
			cout << int(a) % int(b);
			   else "%ֻ������������"; break;
		default:cout << "��������ȷ�������";
			break;
		}
		cout << endl;
	}
	system("pause");
	return 0;
} 