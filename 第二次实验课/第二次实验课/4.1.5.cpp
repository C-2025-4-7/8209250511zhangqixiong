#include <iostream>
#include <string>
using namespace std;

int indexOf(const string& s1, const string& s2) {
    int len1 = s1.length();
    int len2 = s2.length();

    for (int i = 0; i <= len2 - len1; ++i) {
        int j = 0;
        while (j < len1 && s2[i + j] == s1[j]) {
            ++j;
        }
        if (j == len1) {
            return i; // ÕÒµ½Æ¥Åä
        }
    }
    return -1; // Î´ÕÒµ½
}

int main() {
    string s1, s2;

    cout << "Enter the first string: ";
    getline(cin, s1);

    cout << "Enter the second string: ";
    getline(cin, s2);

    int result = indexOf(s1, s2);
    cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << result << endl;

    return 0;
}
