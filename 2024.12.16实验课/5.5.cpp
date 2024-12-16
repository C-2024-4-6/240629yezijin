#include <iostream>             
using namespace std;
class Point {
private:
	int x, y;
public:
	Point(int x=60,int y=80) {
		this->x = x;
		this->y = y;
	}
	void setPoint(int i, int j) {
		x += i;
		y += j;
	}
	void display() {
		cout << "(" << x << "," << y << ")"<<endl;
	}
};
int main()
{
	Point a;
	a.display();
	a.setPoint(2, 2);
	a.display();
	Point b(100, 120);
	b.display();
	b.setPoint(4, 4);
	b.display();
	return 0;
}