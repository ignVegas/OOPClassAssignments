#include <iostream>

int reverseThreeDigit(int digit){
	
	int hun = digit / 100;
	int ten = (digit / 10) % 10;
	int one = digit % 10;
	int reversed = one * 100 + ten * 10 + hun;

	return reversed;

}


int main() {
	std::cout << reverseThreeDigit(325) << std::endl;
	std::cout << reverseThreeDigit(335) << std::endl;
}