#include <iostream>
#include <math.h>

using namespace std;

//2.2.12 Napisz program, który wczytuje ze standardowego wejścia nieujemne
//liczby całkowitą n i m (m > 1), i wypisuje na standardowym wyjściu
//następującą sumę  m√0 +  m√1 + . . . + ⌊ m√n⌋. Algorytm wyliczania
//sumy podziel na dwie funkcje.

double suma( unsigned int n, unsigned int m) {
    unsigned int i;
    double sumowanie=0;
    for ( i = 0 ; i <= n ; i++ )
    {
        sumowanie += sqrt(i)  ;
    }
    return sumowanie * m;
}

int main()
{
    unsigned int n;
    unsigned int m;
    cin >> n >> m;
    cout << suma(n, m) << endl;
    return 0;
}
