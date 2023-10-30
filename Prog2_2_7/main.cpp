#include <iostream>

using namespace std;

//2.2.7 Napisz funkcjê, która dostaje jako argumenty liczby ca³kowite
//n i m, z których co najmniej jedna jest ró¿na od zera i zwraca
//jako wartoœæ nm.

double fndom (int n, int m)
{
    double wynik = 1;
    if (m>=0)
    {
        for(int i=0; i<m; i++)
        {
            wynik*=n;
        }
    } else
    {
        for(int i=0; i<-m; i++)
        {
            wynik/=n;
        }
    }
    return wynik;
}

int main()
{
    int n;
    int m;
    cin >> n >> m;
    cout << fndom (n, m) << endl;
    return 0;
}
