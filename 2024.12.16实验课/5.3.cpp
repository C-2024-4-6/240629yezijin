#include <iostream>             
using namespace std;
class Cuboid {
private:
	int length, width, height, volume;
public:
	void cin() {
		std::cin >> length >> width >> height;
	}
	void compute() {
		volume = length * width * height;
	}
	void cout() {
		std::cout << "volume is:" << volume;
	}
};
int main()
{
	Cuboid c;
	c.cin();
	c.compute();
	c.cout();
	return 0;
}