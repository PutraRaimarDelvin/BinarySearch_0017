#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

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

    cout << "\n=============================================\n";
    cout << "          Masukkan Elemen Array              \n";
    cout << "=============================================\n";

    for (int i = 0; i < nPanjang; i++)
    {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> element[i];
    }
}

void bubbleSortArray()
{
    int pass = 1;
    do
    {
        for (int j = 0; j <= nPanjang - 1 - pass; j++)
        {
            if (element[j] > element[j + 1])
            {
                int temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
        pass++;
    } while (pass <= nPanjang - 1);
}

void display()
{
    cout << "\n=============================================\n";
    cout << "     Hasil Sorting (Ascending Order)         \n";
    cout << "=============================================\n";

    for (int i = 0; i < nPanjang; i++)
    {
        cout << element[i];
        if (i < nPanjang - 1)
        {
            cout << " -> ";
        }
    }
    cout << endl;
}

void binarySearch()
{
    char ulang;
    do
    {
        int low = 0;
        int high = nPanjang - 1;

        cout << "\nMasukkan angka yang dicari: ";
        cin >> x;

        bool ditemukan = false;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (element[mid] == x)
            {
                cout << "[✓] Data ditemukan di indeks " << mid << endl;
                ditemukan = true;
                break;
            }
            else if (x < element[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        if (!ditemukan)
        {
            cout << "[x] Data tidak ditemukan\n";
        }

        cout << "Cari lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');
}

int main()
{
    input();
    bubbleSortArray();
    display();
    binarySearch();
    return 0;
}