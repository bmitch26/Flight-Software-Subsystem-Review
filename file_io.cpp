/*
File I/O:
C++ uses fstream library for file operations:
- Read: ifstream        -> Input File Stream (read files)
- Write: ofstream       -> Output File Stream (write files)
- Read/Write: fstream   -> General File Stream (read + write)
*/

#include <iostream>
#include <fstream>
using namespace std;

// Writing binary data
struct Data {
    int id;
    double value;
};

/*
Imagine parsing a telemetry file:
- 4 bytes for a header
- 8 bytes for a timestamp
- 2 bytes for a CRC
- Payload data
*/
// Basic Idea:
struct Header {
    uint32_t magic; // 4 bytes
    uint64_t timestamp; // 8 bytes
    uint16_t crc; // 2 bytes
};

int main() {
    // Example 1: Read from a file
    // ifstream fin("if_example.txt");
    // if (!fin) {
    //     cerr << "File open error!" << endl;
    //     return 1;
    // }
    // string line;
    // while (getline(fin, line)) {
    //     cout << line << endl;
    // }
    // fin.close();

    // Example 2:  Write to a file
    // ofstream fout("of_example.txt");
    // if (!fout) {
    //     cerr << "File open error!" << endl;
    //     return 1;
    // }
    // fout << "output file example\n";
    // fout << "second line example." << endl;
    // fout.close();

    // Example 3: Reading and writing binary files
    // binary files store data as raw bytes - critical for parsing binary protocols, telemetry data, or sensor logs.
    
    // Writing binary data
    // Data d = {42, 3.1415};
    // ofstream fout("data.bin", ios::binary);
    // fout.write(reinterpret_cast<char*>(&d), sizeof(d));
    // fout.close();

    // Reading binary data
    // Data d;
    // ifstream fin("data.bin", ios::binary);
    // fin.read(reinterpret_cast<char*>(&d), sizeof(d));
    // fin.close();
    // cout << "ID: " << d.id << ", Value: " << d.value << endl;

    // Parse custom binary formats (headers, payloads, CRC)
    Header h;
    ifstream fin("telemetry.bin", ios::binary);
    fin.read(reinterpret_cast<char*>(&h), sizeof(h));
    // CRC validation will depend on the algorithm used (covered later in the Hands-On section)
    fin.close();
    return 0;

    // Steps to parse telemetry from satellite to ground station are as follows:
    // 1. Parse data
    // 2. Validate data (CRC!)
    // 3. Process the contents (e.g. display data, trigger alerts, log to databases)
}