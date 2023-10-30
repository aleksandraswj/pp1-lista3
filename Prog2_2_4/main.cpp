#include <iostream>

using namespace std;

//2.2.4 Napisz funkcjê, która dostaje jako argument nieujemn¹ liczbê ca³kowit¹
//n i zwraca jako wartoœæ liczbê 2n.

unsigned int razyDwa (unsigned int n)
{
    return 2*n;
}

int main()
{
    unsigned int n;
    cin >> n;
    cout << razyDwa(n) << endl;
    return 0;
}
