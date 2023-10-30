#include <iostream>

using namespace std;

//2.2.7 Napisz funkcjê, która dostaje jako argumenty liczby ca³kowite
//n i m, z których co najmniej jedna jest ró¿na od zera i zwraca
//jako wartoœæ nm.

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
