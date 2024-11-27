#include<iostream>
#include<cstring>
using namespace std;
int indexof(const char* s1, const char* s2) {
	int c1, c2, j;
	c1 = strlen(s1);
	c2 = strlen(s2);
	if (c1 > c2) return -1;
	for (int i = 0; i <= c2 - c1; i++) {
		for (j = 0; j < c1; j++) {
			if (s2[i + j] != s1[j])
				break;
		}
		if (j == c1) return i;
	}
	return -1;
}
int main() {
	char s1[100], s2[100],c;
	int i=0, j=0;
	cout << "first:";
	while ((c = getchar()) != '\n') {
		s1[i++] = c;
	}
	cout << "second:";
	while ((c = getchar()) != '\n') {
		s2[j++] = c;
	}
	s1[i] = s2[j] = '\0';
	cout<<"in:"<<indexof(s1, s2)<<endl;
	return 0;
}