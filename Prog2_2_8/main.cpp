#include <iostream>

using namespace std;

//2.2.8 Napisz funkcję, która dostaje jako argumenty liczbę dodatnią n i zwraca
//jako wartość ⌊√n⌋. Rozwiąż zadanie nie wykorzystując funkcji bibliotecznych.

unsigned int pierwiastek(unsigned int n)
{
    unsigned int i;
    for (i=1; i*i<=n; i++);
    return i-1;
}

int main()
{
    unsigned int n;
    cin >> n;
    cout << pierwiastek(n) << endl;
    return 0;
}
