#include <iostream>
using namespace std;

int main() {
    char c;
    int letter = 0, space = 0, digit = 0, other = 0;
    // Öð×Ö·û¶ÁÈ¡£¬Ö±µ½»»ÐÐ·û
    while ((c = cin.get()) != '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letter++;
        }
        else if (c == ' ') {
            space++;
        }
        else if (c >= '0' && c <= '9') {
            digit++;
        }
        else {
            other++;
        }
    }
    cout << "Ó¢ÎÄ×ÖÄ¸£º" << letter << endl;
    cout << "¿Õ¸ñ£º" << space << endl;
    cout << "Êý×Ö×Ö·û£º" << digit << endl;
    cout << "ÆäËü×Ö·û£º" << other << endl;
    return 0;
}