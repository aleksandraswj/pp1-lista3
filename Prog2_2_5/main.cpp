#include <iostream>

using namespace std;

//2.2.5 Napisz funkcjê, która dostaje jako argument liczbê ca³kowit¹
//n i zwraca jako wartoœæ liczbê 2n.

int razyDwa (int n)
{
    return 2*n;
}

int main()
{
    int n;
    cin >> n;
    cout << razyDwa(n) << endl;
    return 0;
}
