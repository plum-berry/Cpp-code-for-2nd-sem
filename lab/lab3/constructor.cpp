#include<iostream>

using namespace std;

class Complex
{
    private:
        float real,imaginary;
    public:
        Complex()
        {
            real = 0;
            imaginary = 0;
        }
        Complex(float real,float imaginary)
        {
            this->real = real;
            this->imaginary = imaginary;
        }
        Complex(Complex& temp)
        {
            real = temp.real;
            imaginary = temp.imaginary;
        }
        void display()
        {
            if(imaginary>0)
                cout<<real<<" + "<<imaginary<<"i"<<endl;
            else
                cout<<real<<" - "<<imaginary<<"i"<<endl;
        }
};


int main()
{
    Complex z1(2,4),z2;
    Complex z3(z1);
    z1.display();
    z2.display();
    z3.display();
    return 0;
}