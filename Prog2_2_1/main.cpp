#include <iostream>

using namespace std;

//2.2.1 (r) Napisz program, kt�ry wczytuje ze standardowego wej�cia liczb�
//ca�kowit� n i wypisuje na standardowe wyj�cie warto�� bezwzgl�dn�
//z n. Do rozwi�zania zadania nie u�ywaj funkcji bibliotecznych za wyj�tkiem
//operacji wej�cia/wyj�cia. W programie u�yj samodzielnie zaimplementowanej
//funkcji licz�cej warto�� bezwzgl�dn�.

int wartoscBezwzgledna (int n)
{
    return n>=0 ? n : -n;
}
int main()
{
    int n;
    cin >> n;
    cout << wartoscBezwzgledna(n) << endl;
    return 0;
}
