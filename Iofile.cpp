#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
    //membuka file dalam mode menulis.
    ofstream outfile;
    // menunjuk ke sebuah nama file
    outfile.open("contohfile.txt");

    cout << ">= Menulis File, \'q\' untuk keluar" << endl;

    while (true)
    {
        cout << "_ ";
        // mendapatkan setiap karakter dalam satu garis
        getline(cin, baris);

    }


}