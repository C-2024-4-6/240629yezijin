#include <iostream>             
using namespace std;
class Student {
private:
	int num, score;
public:
	Student(int num, int score) {
		this->num = num;
		this->score = score;
	}
	friend void max(Student* );
};
void max(Student* p) {
	int f;
	f = p->score;
	for (int i = 0; i < 5; i++) {
		if (f < (p + i)->score) {
			f = (p + i)->score;
		}
	}
	for(int i=0;i<5;i++)
		if ((p + i)->score == f) {
			cout << "max is:" << (p + i)->num;
			break;
		}
}
int main()
{
	Student a[5]{ Student(1,66),Student(2,77),Student(3,88),Student(4,99),Student(5,55) };
	Student* p = a;
	max(p);
	return 0;
}