#include<iostream>
#include<cmath>
using namespace std;
class polynomial
{
    int a, b, c;
public:
    polynomial() 
    {
        a = 0;
        b = 0;
        c = 0;

    }
    polynomial(int x, int y, int z) 
    {
        a = x; b = y; c = z;

    }
    friend istream& operator >> (istream& IN, polynomial& P) 
    {
        IN >> P.a >> P.b >> P.c;
        return IN;
    }
    friend ostream& operator << (ostream& OUT, polynomial& P) 
    {
        OUT << P.a << "x^2+" << P.b << "x+" << P.c;
        return OUT;
    }
    polynomial operator +(polynomial P) 
    {
        polynomial A;
        A.a = a + P.a;
        A.b = b + P.b;
        A.c = c + P.c;
        return A;
    }
};
int main()
{
    polynomial c1, c2, c3;
    cout << "addition of two polynomials\n";
    cout << "enter the 1st polynomial :";
    cin >> c1;
    cout << c1 << endl;
    cout << "enter the 2nd polynoimial:";
    cin >> c2;
    cout << c2 << endl;
    c3 = c1 + c2;
    cout << "addition is:";
    cout << c3 << endl;
}
