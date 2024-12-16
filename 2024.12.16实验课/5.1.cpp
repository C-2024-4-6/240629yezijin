#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:             // 数据成员为公用的->私有
	int hour;
	int minute;
	int sec;
public:
	void cin() {
		std::cin >> hour>>minute>>sec;  //输入设定的时间 
	}
	void cout() {
		std::cout << hour << "：" << minute << "：" << sec << endl;
	}
};
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.cin();
	t1.cout();
	return 0;
}