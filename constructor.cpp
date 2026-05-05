#include <iostream>
using namespace std;

class mahasiswa {
public:
    mahasiswa(); //constructor
};

mahasiswa::mahasiswa() {
    cout << "Constructor terpanggil!" << endl; // implementasi constructor
}

int main() {
    mahasiswa mhs; // pembuatan object
    return 0;
}
