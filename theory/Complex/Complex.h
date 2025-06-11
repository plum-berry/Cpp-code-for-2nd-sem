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
    void display();
};
