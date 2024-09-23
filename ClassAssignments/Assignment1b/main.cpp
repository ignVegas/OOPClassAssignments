#include <iostream>
#include <iomanip>
float calculateTax(float total, float tax){
	return total * tax;
}


int main() {
	float x, y, z;
	float tv = 1400.00;
	float dvd = 220.00;
	float remote = 35.20;
	std::cout << "How Many TVs were sold?: " << std::endl;
	std::cin >> x;
	std::cout << "How Many DVDs were sold?: " << std::endl;
	std::cin >> y;
	std::cout << "How Many remote controllers were sold?: " << std::endl;
	std::cin >> z;

	float total = (tv * x) + (dvd * y) + (remote * z);
	float tax = 8.25 / 100;

	std::cout
		<< std::setw(15) << std::left << "Quantity"
		<< std::setw(15) << std::left << "Description"
		<< std::setw(15) << std::right << "Unit Price"
		<< std::setw(15) << std::right << "Total Price" 
	<< std::endl;
	
	std::cout << std::setfill('-') << std::setw(60) << "-" << std::setfill(' ') << std::endl;

	std::cout << std::fixed << std::setprecision(2); // adds the lil decimal points
	
	std::cout
		<< std::setw(15) << std::left << x
		<< std::setw(15) << std::left << "TV"
		<< std::setw(15) << std::right << tv
		<< std::setw(15) << std::right << x * tv
	<< std::endl;

	std::cout
		<< std::setw(15) << std::left << y
		<< std::setw(15) << std::left << "DVD"
		<< std::setw(15) << std::right << dvd
		<< std::setw(15) << std::right << y * dvd
	<< std::endl;

	std::cout
		<< std::setw(15) << std::left << z
		<< std::setw(15) << std::left << "Remote"
		<< std::setw(15) << std::right << remote
		<< std::setw(15) << std::right << z * remote
	<< std::endl;

	std::cout << std::left << std::setw(30) << "Total before tax"
		<< std::right << std::setw(30) << total
		<< std::endl;

	std::cout << std::left << std::setw(30) << "Tax"
		<< std::right << std::setw(30) << calculateTax(total, tax) 
		<< std::endl;

	std::cout << std::left << std::setw(30) << "Total"
		<< std::right << std::setw(30) << calculateTax(total, tax) + total
		<< std::endl;

	std::cout << std::setfill('-') << std::setw(60) << "-" << std::setfill(' ') << std::endl;

	return 0;
}