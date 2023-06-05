#include <iostream>
#include <string>
using namespace std;

class orang {
public:
    string nama;

    orang(string pNama) :
        nama(pNama) {
        cout << "orang dibuat\n" << endl;
    }
    ~orang() {
        cout << "orang dihapus\n" << endl;
    }

    int jumlah(int a, int b) {
        return a + b;
    }

};

class pengarang : public orang {
public:
    string penerbit;

    pengarang(string pNama, string ppenerbit) :
        orang(pNama),
        penerbit(ppenerbit) {
        cout << "pengarang dibuat\n" << endl;
    }
    ~pengarang () {
        cout << "pengarang dihapus\n" << endl;
    }
    string perkenalan() {
        return "Halo, nama saya" + nama + "pengarang" + penerbit + "\n\n";
    }
};

int main() {
    pengarang("Joko", "penerbit Game Press");    //pengarang 1
    pengarang("Lia", "penerbit Game Press");     //pengarang 2
    pengarang("Giga", "penerbit Game Press");    //pengarang 3
