/*
Bitfields: controlling memory at the bit level.
Useful for flags, hardware registers, protocol headers (e.g. TCP/IP packet fields)
*/

#include <iostream>
using namespace std;

struct Flags {
    unsigned int a : 1;  // 1 bit
    unsigned int b : 3;  // 3 bits
    unsigned int c : 4;  // 4 bits
};

int main() {
    Flags f;
    f.a = 1;
    f.b = 5;  // up to 7 (3 bits max)
    f.c = 15; // up to 15 (4 bits max)

    cout << "a: " << f.a << ", b: " << f.b << ", c: " << f.c << endl;
    cout << "Size of Flags struct: " << sizeof(Flags) << endl;
    return 0;
}
