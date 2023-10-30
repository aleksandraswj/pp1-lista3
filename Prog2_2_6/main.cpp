#include <iostream>

using namespace std;

//2.2.6 Napisz funkcjê, która dostaje jako argumenty nieujemne liczby ca³kowite
//n i m, z których co najmniej jedna jest ró¿na od zera i zwraca
//jako wartoœæ nm.

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
