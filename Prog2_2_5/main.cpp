#include <iostream>

using namespace std;

//2.2.5 Napisz funkcj�, kt�ra dostaje jako argument liczb� ca�kowit�
//n i zwraca jako warto�� liczb� 2n.

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
