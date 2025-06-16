class Complex
{
  private:
    float real, imaginary;
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
    Complex operator+(Complex c1);
    Complex operator-(Complex c2);
    friend std::ostream & operator <<(std::ostream &out,const Complex &c);
    friend std::istream & operator >>(std::istream &in, Complex &c);
    void display();
};
