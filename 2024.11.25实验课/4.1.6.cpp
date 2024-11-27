#include<iostream>
using namespace std;
void count(const char s[], int counts[]) {
    for (int i = 0; i < 26; i++) {
        counts[s[i]-'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            cout << (char)(i+'a') << ":" << counts[i] << " times" << endl;
        }
    }
}
int main() {
    int counts[26] = { 0 },i=0;
    char s[100],c;
    while ((c = getchar()) != '\n') {
        if (c >= 'A' && c <= 'Z')
            s[i++] = c - 'A' + 'a';
        if (c >= 'a' && c <= 'z')
            s[i++] = c;
    }
    count(s, counts);
	return 0;
}