#include <iostream>

using namespace std;

//2.2.4 Napisz funkcj�, kt�ra dostaje jako argument nieujemn� liczb� ca�kowit�
//n i zwraca jako warto�� liczb� 2n.

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
