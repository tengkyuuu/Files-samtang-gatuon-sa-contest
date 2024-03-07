#include <iostream>
using namespace std;

int countWords(const string& str) {
	int count = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ' || str[i] == '.' || str[i] == '!' || str[i] == '?') {
			count++;
		}
	}
	return count;
}

int main() {
	cout << countWords("Hello world, how are you?");
}