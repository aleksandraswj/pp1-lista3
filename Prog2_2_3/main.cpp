#include <iostream>

using namespace std;

//2.2.3 Napisz program, kt�ry wczytuje ze standardowego wej�cia nieujemn�
//liczb� ca�kowit� n (n > 2) i wypisuje na standardowym wyj�ciu najwi�ksz�
//liczb� k tak�, �e k dzieli n i k < n. Algorytm wyszukiwania
//liczby k spe�niaj�cej powy�sze warunki umie�� w oddzielnej funkcji.

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
