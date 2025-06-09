#include<iostream>
#include<format>
#include<string>
using namespace std;

class Complex
{
    private:
        float real,imaginary;
        string number;
    public:
        void input()
        {
            cout<<"Enter the real and imaginary part of the complex number"<<endl;
            cin>>real>>imaginary;
            generate();
        }
        void generate()
        {   
            if(imaginary>=0)
            {
            number = format("{} + {}i",real,imaginary);
            }
            else{
                number = format("{} - {}i",real,-imaginary);
            }

        }
        friend Complex add(Complex c1,Complex c2)
        {
            Complex temp;
            temp.real = c1.real + c2.real;
            temp.imaginary = c1.imaginary + c2.imaginary;
            temp.generate();
            return temp;
        }
        void display()
        {
            cout<<"Complex Number: "<<number<<endl;
        }

};

int main()
{
    Complex z1,z2,z3;
    z1.input();
    z1.display();
    z2.input();
    z2.display();

    z3 = add(z1,z2);
    z3.display();
    return 0;
}