#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:             // ���ݳ�ԱΪ���õ�->˽��
	int hour;
	int minute;
	int sec;
public:
	void cin() {
		std::cin >> hour>>minute>>sec;  //�����趨��ʱ�� 
	}
	void cout() {
		std::cout << hour << "��" << minute << "��" << sec << endl;
	}
};
int main()
{
	Time t1;           //����t1ΪTime�����
	t1.cin();
	t1.cout();
	return 0;
}