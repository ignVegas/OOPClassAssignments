
#include <iostream>
using namespace std;

class One {
private:
	int x, y;
public:

	void set(int valy, int valx = 0) {
		x = valx;
		y = valy;
	}

	int getX() const {
		return x;
	}

	int getY() const {
		return y;
	}
};

int main() {
	One o;
	o.set(20);
	cout << "X: " << o.getX() << endl;
	cout << "Y: " << o.getY() << endl;

	return 0;
}
