
#include <iostream>

using namespace std;

void reverse(int &digit) {
	int startingNum = digit;
	int reversed = 0;
	while (startingNum != 0) {
		int num = startingNum % 10;
		reversed = reversed * 10 + num;
		startingNum /= 10;
	}

	digit = reversed;

}

void swap(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}


int main() {
	int a, b;
	cout << "Enter two ints (a and b): ";
	cin >> a >> b;

	reverse(a);
	reverse(b);

	swap(a, b);
	cout << "Output: " << a << " " << b << endl;

	return 0;
}
