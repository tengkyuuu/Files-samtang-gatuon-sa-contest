#include <iostream>
using namespace std;

bool isPalindrome(const string& word) {
	int i = 0;
	int j = word.length() - 1;
	while (i < j) {
		if (word[i] != word[j]) {
			return false;
		}
		i++;
		j--;
	}
	return true;
}

int main() {
	string word;
	cout << "Enter a word: ";
	cin >> word;
	if (isPalindrome(word)) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
}