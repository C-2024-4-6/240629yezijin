#include <iostream>
#include<cstdio>
using namespace std;
int main() {
	char a;
	int yw=0,kg=0,sz=0,qt=0;
	cout << "����һ���ַ�";
	while ((a = getchar())!= '\n') {
		if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
			yw++;
		else if (a >= '0' && a <= '9')
			sz++;
		else if (a == ' ')
			kg++;
		else qt++;
	}
	printf("Ӣ����ĸ��:%d��\n�ո���:%d��\n������:%d��\n�����ַ���:%d��\n",yw, kg, sz, qt);
	system("pause");
	return 0;
}