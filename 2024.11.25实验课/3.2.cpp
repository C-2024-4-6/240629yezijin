#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
bool is_prime(int num);
int main() {
	int n, ans = 0;
	for (int i = 1; ans<200; i++) {
		if (is_prime(i) == 1) {
			cout << i << " ";
			ans++;
			if (ans%10 ==0 ) 
				cout << endl;
			
		}
	}
		return 0;
}
bool is_prime(int num) {
	if (num <= 1) return false;
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) return false;
	}
	return true;
}