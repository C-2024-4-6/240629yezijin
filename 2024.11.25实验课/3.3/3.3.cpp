#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include"mytemperature.h"
using namespace std;
int main() {
	double a, b;
	cout<<"请输入摄氏温度：";
	cin >> a;
	printf("华氏温度为%.1f\n", celsius_to_fah(a));
	cout<<"请输入华氏温度：";
    cin >> b;
    printf("摄氏温度为%.2f\n", fahrenheit_to_cels(b));
		return 0;
}