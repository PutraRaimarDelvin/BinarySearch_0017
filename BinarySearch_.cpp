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
    cout << "\nHasil sorting:\n";
    for (int i = 0; i < nPanjang; i++)
    {
        cout << element[i] << " ";
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

        cout << "Masukkan angka yang dicari: ";
        cin >> x;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (element[mid] == x)
            {
                cout << "Ditemukan di indeks " << mid << endl;
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

        if (low > high)
        {
            cout << "Tidak ditemukan\n";
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