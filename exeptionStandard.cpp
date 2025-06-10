#include <iostream>
#include <exception>
//untuk obyek exepction yang akan digunakan
#include <array>
// untuk obyek array yang kita gunakan
using namespace std;

int main()
{
    cout << "awal program" << endl; // penanda 1:...
    try
    {
        array<int, 3> data = {10, 20, 30 };
        // pesan array integer 3 elemen
        cout << data.at(5) << endl;
        //memanggil array elemen ke 5
    }

}