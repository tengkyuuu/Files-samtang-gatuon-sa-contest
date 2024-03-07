#include <iostream>
using namespace std;

string reverseString(const string str) {
	string x = "";
	for (int i = str.length() - 1; i >= 0; i--) {
		x += str[i];
	}
	return x;
}

int main() {
	cout << reverseString("James");
}