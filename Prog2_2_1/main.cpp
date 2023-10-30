#include <iostream>

using namespace std;

//2.2.1 (r) Napisz program, który wczytuje ze standardowego wejœcia liczbê
//ca³kowit¹ n i wypisuje na standardowe wyjœcie wartoœæ bezwzglêdn¹
//z n. Do rozwi¹zania zadania nie u¿ywaj funkcji bibliotecznych za wyj¹tkiem
//operacji wejœcia/wyjœcia. W programie u¿yj samodzielnie zaimplementowanej
//funkcji licz¹cej wartoœæ bezwzglêdn¹.

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
