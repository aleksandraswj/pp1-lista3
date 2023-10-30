#include <iostream>

using namespace std;

//2.2.2 (r) Napisz program, kt�ry wczytuje ze standardowego wej�cia nieujemn�
//liczb� ca�kowit� n i wypisuje na standardowym wyj�ciu liczb�
//n!.Wprogramie u�yj samodzielnie zaimplementowanej funkcji licz�cej
//warto�� silni.

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
