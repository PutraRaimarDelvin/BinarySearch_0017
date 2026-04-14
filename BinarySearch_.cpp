#include <iostream>
using namespace std;

int element[10];
int nPanjang;

void input()
{
    while (true)
    {
        cout << "Masukkan jumlah elemen (max 10): ";
        cin >> nPanjang;

        if (nPanjang <= 10)
            break;
        else
            cout << "Jumlah tidak boleh lebih dari 10!\n";
    }
}

int main()
{
    input();
    return 0;
}