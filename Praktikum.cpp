#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
private:
    int id;
    string nama;

public:
    // Constructor 
    Kendaraan() {
        id = 0;
        nama = "Belum terdaftar";
    }

    Kendaraan(int idKendaraan) {
        id = idKendaraan;
        nama = "Belum terdaftar";
    }

    Kendaraan(string namaKendaraan) {
        id = 0;
        nama = namaKendaraan;
    }

    Kendaraan(int idKendaraan, string namaKendaraan) {
        id = idKendaraan;
        nama = namaKendaraan;
    }

    // Metode untuk menampilkan informasi kendaraan
    void tampilkanInfo() {
        cout << "ID Kendaraan : " << id << endl;
        cout << "Nama Kendaraan: " << nama << endl;
        cout << "--------------------------" << endl;
    }
};

