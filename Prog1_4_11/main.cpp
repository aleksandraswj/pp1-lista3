#include <iostream>
#include <math.h>

using namespace std;

//1.4.11 Napisz program, który wczytuje ze standardowego wejścia liczby a, b,c, d i:
//a) wypisuje na standardowe wyjście najmniejszą nieujemną liczbę
//całkowitą x taką, że |a| ∗ x2 + b ∗ x + c > d.
//b) wypisuje na standardowe wyjście największą nieujemną liczbę całkowitą
//x taką, że 5∗x2+a∗x+b < c. Zakładamy, że taka nieujemna
//całkowita liczba x istnieje.
//c) wypisuje na standardowe wyjście największą nieujemną liczbę całkowitą
//x taką, że 5∗x2+a∗x+b ≤ c. Zakładamy, że taka nieujemna
//całkowita liczba x istnieje.

double delta(double a, double b, double c)
{
    return b*b-4*a*c;
}

double fx1(double a, double b, double dlt)
{
    return (-b-sqrt(dlt))/(2*a);
}

double fx2(double a, double b, double dlt)
{
    return (-b+sqrt(dlt))/(2*a);
}

long f1_4_11_a(double a, double b, double c, double d)
{
    if (a!=0)
    {
      double dlt = delta(abs(a), b, c-d);
      if (dlt>=0)
      {
        double x1 = fx1(abs(a), b,dlt);
        double x2 = fx2(abs(a), b,dlt);
        return x1*x2>0 ? 0 : int(x2)+1;
      }
      throw invalid_argument("Delta musi byc nieujemna");
    }
    else
    {
      double x = -(c-d)/b;
      return x<0 ? 0 : int(x)+1;
    }
}

long f1_4_11_b(double a, double b, double c, double d)
{
  double dlt = delta(5, a, b-c);
  if (dlt>=0)
  {
    double x1 = fx1(5, a, dlt);
    double x2 = fx2(5, a, dlt);
    long roundx2 = ( int(x2)==x2 ? x2-1 : x2 );
    if ( roundx2>x1 && roundx2>=0 )
    {
        return int(x2);
    }
    throw invalid_argument("Brak rozwiazania");
  }
  throw invalid_argument("Delta musi byc nieujemna");
}

long f1_4_11_c(double a, double b, double c, double d)
{
  double dlt = delta(5, a, b-c);
  if (dlt>=0)
  {
    double x1 = fx1(5, a, dlt);
    double x2 = fx2(5, a, dlt);
    if ( int(x2)>=x1 && int(x2)>=0 )
    {
        return int(x2);
    }
    throw invalid_argument("Brak rozwiazania");
  }
  throw invalid_argument("Delta musi byc nieujemna");
}

int main()
{
    double a;
    double b;
    double c;
    double d;
    cin >> a >> b >> c >> d;
    try
    {
        cout << f1_4_11_a(a, b, c, d) << endl;
    } catch (invalid_argument& e)
    {
        cerr << e.what() << endl;
    }
    try
    {
        cout << f1_4_11_b(a, b, c, d) << endl;
    } catch (invalid_argument& e)
    {
        cerr << e.what() << endl;
    }
    try
    {
        cout << f1_4_11_c(a, b, c, d) << endl;
    } catch (invalid_argument& e)
    {
        cerr << e.what() << endl;
    }

    return 0;
}
