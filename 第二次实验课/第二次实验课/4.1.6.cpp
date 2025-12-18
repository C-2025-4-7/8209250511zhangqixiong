#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void count(const char s[], int counts[]) {
    for (int i = 0; s[i] != '\0'; ++i) {
        if (isalpha(s[i])) {
            char ch = tolower(s[i]); // תΪСд
            counts[ch - 'a']++;
        }
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int counts[26] = { 0 };
    count(input.c_str(), counts);

    for (int i = 0; i < 26; ++i) {
        if (counts[i] > 0) {
            cout << static_cast<char>('a' + i) << ": " << counts[i] << endl;
        }
    }

    return 0;
}
