#include <iostream>
using namespace std;

void CetakData(string nama, string nisn, string jurusan, int tinggiBadan)
{
    cout << "nama anda: " << nama << endl;
    cout << "nisn anda: " << nisn << endl;
    cout << "jurusan anda: " << jurusan << endl;
    cout << "tinggi badan anda: " << tinggiBadan << endl;
}

int main()
{
    string nama = "Naisyla Anwar";
    string nisn = "0089039196";
    string jurusan = "PPLG";
    int tinggiBadan = 162;

    CetakData(nama, nisn, jurusan, tinggiBadan);
    return 0;
}