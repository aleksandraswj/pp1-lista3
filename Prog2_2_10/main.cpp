#include <iostream>

using namespace std;

//2.2.10 (r) Napisz program, kt�ry wczytuje ze standardowego wej�cia nieujemn�
//liczb� ca�kowit� n i wypisuje na standardowym wyj�ciu sum�
//liczb mniejszych od n i zarazem wzgl�dnie pierwszych z n. Algorytm
//wyliczania sumy podziel na dwie funkcje.

unsigned int nwd(unsigned int m, unsigned int l)
{
   while(m!=l)
   {
      if(m>l)
      {
        m-=l;
      }
      else
      {
        l-=m;
      }
   }

   return m;
}

unsigned int suma ( unsigned int n ) {
    unsigned int i;
    unsigned int sumowanie=0;
    for ( i = 1 ; i < n ; i++ )
    {
        if ( nwd( i , n ) == 1 )
        {
            sumowanie += i ;
        }

    }
    return sumowanie ;
}

int main()
{
    unsigned int n;
    cin >> n;
    cout << suma(n) << endl;
    return 0;
}
