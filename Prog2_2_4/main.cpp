#include <iostream>

using namespace std;

//2.2.4 Napisz funkcjê, która dostaje jako argument nieujemn¹ liczbê ca³kowit¹
//n i zwraca jako wartoœæ liczbê 2n.

unsigned int f2don (unsigned int n)
{
    unsigned int wynik = 1;
    for(unsigned int i=0; i<n; i++)
    {
        wynik *= 2;
    }
    return wynik;
    //return 1 << n;
}

int main()
{
    unsigned int n;
    cin >> n;
    cout << f2don(n) << endl;
    return 0;
}
