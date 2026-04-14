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

int main()
{
    input();
    bubbleSortArray();
    display();
    return 0;
}