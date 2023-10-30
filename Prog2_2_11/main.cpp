#include <iostream>
#include <math.h>

using namespace std;

//2.2.11 Napisz program, który wczytuje ze standardowego wejścia nieujemną
//liczbę całkowitą n i wypisuje na standardowym wyjściu następującą
//sumę √0 + √1 + . . . + ⌊√n⌋. Algorytm wyliczania sumy podziel
//na dwie funkcje.

double suma( unsigned int n ) {
    unsigned int i;
    double sumowanie=0;
    for ( i = 0 ; i <= n ; i++ )
    {
        sumowanie += sqrt(i)  ;
    }
    return sumowanie;
}

int main()
{
    unsigned int n;
    cin >> n;
    cout << suma(n) << endl;
    return 0;
}
