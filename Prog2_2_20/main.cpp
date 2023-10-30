#include <iostream>

using namespace std;

//2.2.20 (r,!) Napisz rekurencyjn� funkcj�, kt�ra dla otrzymanej w argumencie
//nieujemnej ca�kowitej liczby n zwraca jako warto�� n!.

unsigned int silniaRek(unsigned int n)
{
    return n==0 ? 1 : n*(silniaRek(n-1));
}

int main()
{
    unsigned int n;
    cin >> n ;
    cout << silniaRek(n) << endl;
    return 0;
}
