#include <iostream>
using namespace std;

int sumOfEven(int num) {
	int sum = 0;
	
	while (num > 0) {
		int digit = num % 10;
		if (digit % 2 == 0) {
			sum += digit;
		}
		num /= 10;
	}
	return sum;
}

int main() {
	int num;
	cout << "Enter numbers: ";
	cin >> num;
	cout << "Sum: " << sumOfEven(num);
	
}