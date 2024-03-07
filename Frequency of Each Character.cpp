#include <iostream>
#include <set>
using namespace std;

void frequency(const string& s) {
    set<char> counted;
    for (int i = 0; i < s.length(); i++) {
        int count = 0;
        for (int j = 0; j < s.length(); j++) {
            if (s[i] == s[j]) {
                count++;
            }
        }
        if (counted.find(s[i]) == counted.end()) {
            cout << s[i] << ": " << count << std::endl;
            counted.insert(s[i]);
        }
    }
}

int main() {
    frequency("Jajmeasj");
    return 0;
}