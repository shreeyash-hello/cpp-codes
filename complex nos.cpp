#include<iostream>
using namespace std;
class complex
{
public:
    float real, img;
    complex()
    {
        real = 0;
        img = 0;
    }
    complex operator +(complex);
    complex operator *(complex);
    friend ostream& operator<<(ostream&, complex&);
    friend istream& operator>>(istream&, complex&);
};

complex complex::operator +(complex obj)
{
    complex temp;
    temp.real = real + obj.real;
    temp.img = img + obj.img;
    return (temp);
}
istream& operator>>(istream& is, complex& obj)
{
    is >> obj.real;
    is >> obj.img;
    return is;

}

ostream& operator<<(ostream& os, complex& obj)
{
    os << obj.real;
    os << "+" << obj.img << "i";
    return os;
}

complex complex::operator *(complex obj)
{
    complex temp;
    temp.real = (real * obj.real) - (img * obj.img);
    temp.img = (real * obj.img) + (img + obj.img);
    return (temp);
}
int main()
{
    complex a, b, c, d;
    //cout<<"\n Enter first complex number"<<endl;
    cout << "\n Enter real and imaginary part of first complex number:";
    cin >> a;

    //cout<<"\n Enter second complex number"<<endl;
    cout << "\n Enter real and imaginary part of second complex number:";
    cin >> b;

    cout << "\n Arithmetic operations are :";
    c = a + b;
    cout << "\n Addition is:" << c;

    d = a * b;
    cout << "\n Multiplication is:" << d << "\n";
    return 0;
}
