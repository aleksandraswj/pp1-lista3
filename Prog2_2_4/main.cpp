#include <iostream>

using namespace std;

//2.2.4 Napisz funkcj�, kt�ra dostaje jako argument nieujemn� liczb� ca�kowit�
//n i zwraca jako warto�� liczb� 2n.

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
