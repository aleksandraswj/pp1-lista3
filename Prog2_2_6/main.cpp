#include <iostream>

using namespace std;

//2.2.6 Napisz funkcj�, kt�ra dostaje jako argumenty nieujemne liczby ca�kowite
//n i m, z kt�rych co najmniej jedna jest r�na od zera i zwraca
//jako warto�� nm.

unsigned int mnozenie (unsigned int n, unsigned int m)
{
   return m*n;
}

int main()
{
    unsigned int n;
    unsigned int m;
    cin >> n >> m;
    cout << mnozenie (n, m) << endl;
    return 0;
}
