#include <iostream>

using namespace std;

//2.2.7 Napisz funkcj�, kt�ra dostaje jako argumenty liczby ca�kowite
//n i m, z kt�rych co najmniej jedna jest r�na od zera i zwraca
//jako warto�� nm.

int mnozenie (int n, int m)
{
   return m*n;
}

int main()
{
    int n;
    int m;
    cin >> n >> m;
    cout << mnozenie (n, m) << endl;
    return 0;
}
