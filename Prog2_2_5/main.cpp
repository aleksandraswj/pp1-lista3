#include <iostream>

using namespace std;

//2.2.5 Napisz funkcjê, która dostaje jako argument liczbê ca³kowit¹
//n i zwraca jako wartoœæ liczbê 2n.

double f2don (int n)
{
    double wynik = 1;
    if (n>=0)
    {
        for(int i=0; i<n; i++)
        {
            wynik *= 2;
        }
    } else
    {
        for(int i=0; i<-n; i++)
        {
            wynik/=2;
        }
    }
    return wynik;
}

int main()
{
    int n;
    cin >> n;
    cout << f2don(n) << endl;
    return 0;
}
