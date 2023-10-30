#include <iostream>

using namespace std;

//2.2.5 Napisz funkcj�, kt�ra dostaje jako argument liczb� ca�kowit�
//n i zwraca jako warto�� liczb� 2n.

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
