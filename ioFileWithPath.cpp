#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;
    string NamaFile;

    cout << "Masukan Nama File : ";
    cin >> NamaFile;

    // membuka File dalam mode menulis
    ofstream outfile;
    //menunjuk ke sebuah nama file
    outfile.open(NamaFile + ".txt"), ios::out;
    cout << ">=menulis file, \'q\' untuk keluar" << endl;
    //unlimited loop untuk menulis
    while (true)
    {
        cout << "_ ";
        // mendapatkan setiap karakter dalam satu garis
        getline(cin, baris);
        // loop akan berhenti jika anda masukkan karakter q
        if (baris == "q") break;
        // menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    // selesai dalam menulis sekarang tutup file nya
    outfile.close();
}