#include <iostream>
using namespace std;

class Mahasiswa { //membuat class mahasiswa

public:
    static int nim; // deklarasi variabel static yaitu variabel nim
    //deklarasi variabel member
    int id;
    string nama;
    
    //deklarasi prosedur setID() dan printALL()
    void setID();
    void printALL();

    //pembuatan cosntructor Mahasiswa dengan parameter pnama
    //member initialize list
    Mahasiswa(string pnama) :nama(pnama) {
        setID();
    }
};

//memberi value ke variabel nim dari class mahasiswa
int Mahasiswa::nim = 0;

//mengimplementasikan prosedur - prosedur di luar class
void Mahasiswa::setID() {
    id = ++nim;
};

void Mahasiswa::printALL() {
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
};
