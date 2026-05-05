#include <iostream>
using namespace std;

class Kendaraan {
private:
    int id;
    string nama;

public:

    Kendaraan() {
        id = 0;
        nama = "Tidak diketahui";
    }

    Kendaraan(int i) {
        id = i;
        nama = "Tidak diketahui";
    }

    Kendaraan(string n) {
        id = 0;
        nama = n;
    }

    Kendaraan(int i, string n) {
        id = i;
        nama = n;
    }

    void tampilkan() {
        cout << "ID Kendaraan   : " << id << endl;
        cout << "Nama Kendaraan : " << nama << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    // Membuat objek dengan berbagai constructor
    Kendaraan k1;                 // default
    Kendaraan k2(101);            // hanya id
    Kendaraan k3("Motor");        // hanya nama
    Kendaraan k4(202, "Mobil");   // lengkap

    // Menampilkan data
    k1.tampilkan();
    k2.tampilkan();
    k3.tampilkan();
    k4.tampilkan();

    return 0;
}