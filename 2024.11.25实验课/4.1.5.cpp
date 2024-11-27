#include<iostream>
#include<cstring>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
    int c1 = strlen(s1);
    int c2 = strlen(s2);
    if (c1 > c2) {
        return -1; // 如果s1比s2长，s1不可能在s2中
    }
    for (int i = 0; i <= c2 - c1; i++) {
        int j;
        for (j = 0; j < c1; j++) {
            if (s2[i + j] != s1[j]) {
                break; // 如果字符不匹配，跳出内层循环
            }
        }
        if (j == c1) {
            return i; // 如果内层循环正常结束，说明找到了匹配
        }
    }
    return -1; // 如果没有找到匹配，返回-1
}
int main() {
	char s1[100],s2[100],c;
	int i=0,j=0;
	cout << "Enter the first string: ";
    while ((c = getchar()) != '\n') {
        s1[i++] = c;
    }
	cout << "Enter the second string: ";
    while ((c = getchar()) != '\n') {
        s2[j++] = c;
    }
    s1[i] = s2[j] = '\0';
	cout << "indexOf('s1,s2') is " << indexOf(s1, s2) << endl;
	return 0;
}