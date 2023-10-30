#include <iostream>

using namespace std;

//2.2.20 (r,!) Napisz rekurencyjn¹ funkcjê, która dla otrzymanej w argumencie
//nieujemnej ca³kowitej liczby n zwraca jako wartoœæ n!.

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
