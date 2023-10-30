#include <iostream>

using namespace std;

//2.2.6 Napisz funkcjê, która dostaje jako argumenty nieujemne liczby ca³kowite
//n i m, z których co najmniej jedna jest ró¿na od zera i zwraca
//jako wartoœæ nm.


unsigned int fndom (unsigned int n, unsigned int m)
{
    unsigned int wynik = 1;
    for(unsigned int i=0; i<m; i++)
    {
        wynik *= n;
    }
    return wynik;
}

int main()
{
    unsigned int n;
    unsigned int m;
    cin >> n >> m;
    cout << fndom(n, m) << endl;
    return 0;
}
