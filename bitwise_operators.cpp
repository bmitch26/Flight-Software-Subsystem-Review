/*
Bitwise Operators: allow manipulation of individual bits directly.
Critical for embedded systems, device drivers, communication protocols,
& efficient algorithms.

Common in:
- Flags and permissions (chmod, feature toggles)
- Low-level optimization
- Hardware interaction (registers, sensors)
- Data compression, checksums, CRC

Include: AND (&), OR (|), XOR (^), NOT (~), Left Shift (<<), Right Shift (>>)
*/

#include <iostream>
using namespace std;

int main() {
    int x = 5; // 0101
    int y = 3; // 0011

    cout << "x & y = " << (x & y) << endl;       // 0001 = 1
    cout << "x | y = " << (x | y) << endl;      // 0111 = 7
    cout << "x ^ y = " << (x ^ y) << endl;       // 0110 = 6
    cout << "~x = " << (~x) << endl;             // ...11111010 (2's complement)
    cout << "x << 1 = " << (x << 1) << endl;     // 1010 = 10
    cout << "x >> 1 = " << (x >> 1) << endl;     // 0010 = 2

    // Common bitwise tricks: set bit, clear bit, toggle bit
    int flags = 0;
    flags |= (1 << 1);  // Set bit 1
    flags |= (1 << 3);  // Set bit 3
    flags &= ~(1 << 1); // Clear bit 1


    return 0;
}