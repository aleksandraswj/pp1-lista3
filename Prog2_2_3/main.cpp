#include <iostream>

using namespace std;

//2.2.3 Napisz program, który wczytuje ze standardowego wejœcia nieujemn¹
//liczbê ca³kowit¹ n (n > 2) i wypisuje na standardowym wyjœciu najwiêksz¹
//liczbê k tak¹, ¿e k dzieli n i k < n. Algorytm wyszukiwania
//liczby k spe³niaj¹cej powy¿sze warunki umieœæ w oddzielnej funkcji.

unsigned int liczbaK (unsigned int n)
{
    for(int i=2; i<n; i++)
    {
        if(!(n%i))
        {
            return n/i;
        }
    }
    return 0;
}
int main()
{
    unsigned int n;
    cin >> n;
    cout << liczbaK(n) << endl;

    return 0;
}
