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
    outfile.open(NamaFile + ".txt");
    cout << ">=menulis file, \'q\' untuk keluar" << endl;


}