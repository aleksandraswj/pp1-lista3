#include <iostream>

using namespace std;

//2.2.2 (r) Napisz program, który wczytuje ze standardowego wejœcia nieujemn¹
//liczbê ca³kowit¹ n i wypisuje na standardowym wyjœciu liczbê
//n!.Wprogramie u¿yj samodzielnie zaimplementowanej funkcji licz¹cej
//wartoœæ silni.

unsigned int silnia(unsigned int n)
{
    unsigned int wynik=1;
    for (unsigned int i=1; i<=n; i++)
    {
        wynik*=i;
    }
    return wynik;
}


int main()
{
    unsigned int n;
    cin >> n ;
    cout << silnia(n) << endl;
    return 0;
}
