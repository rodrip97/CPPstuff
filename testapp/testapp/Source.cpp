#include <iostream>
#include <cmath>
using namespace std;


bool is_prime(int n) {

	if (n <= 1)
		return false;
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;

	return true;
}
int main() {
	
	int fav_number;

	std::cout << "What's your favourite number?";
	
	std::cin >> fav_number;

	double square = sqrt(fav_number);
	int times_hundred = fav_number * 100;

	std::cout << "The square root of that number is: \n"<< square << "\n and the number times 100 is:\n"<<  times_hundred << "\n";
	
	if (is_prime(fav_number == true))
		std::cout << "This number is a prime! number \n";
	else
		std::cout << "This number is not a prime number! \n";
		

	return 0;



}
