#include <iostream>
#include<cstdio>
using namespace std;
int main() {
	char a;
	int yw=0,kg=0,sz=0,qt=0;
	cout << "输入一行字符";
	while ((a = getchar())!= '\n') {
		if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
			yw++;
		else if (a >= '0' && a <= '9')
			sz++;
		else if (a == ' ')
			kg++;
		else qt++;
	}
	printf("英文字母有:%d个\n空格有:%d个\n数字有:%d个\n其他字符有:%d个\n",yw, kg, sz, qt);
	system("pause");
	return 0;
}