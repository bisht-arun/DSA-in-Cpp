#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    void display()
    {
        cout << this->real << " + " << imag << "i" << endl;
    }

    void add(const Complex &C)
    {
        real = real + C.real;
        imag = imag + C.imag;
    }

    void multiply(const Complex &C)
    {
        int r1, r2, img1, img2;

        r1 = real * C.real;
        img1 = real * C.imag;

        r2 = imag * C.imag;
        img2 = imag * C.real;

        // adding

        real = r1 + (-1) * r2;
        imag = img1 + img2;
    }
};

int main()
{
    int real1, real2;
    int imag1, imag2;

    cout << "Enter the Complex number : " << endl;
    cin >> real1 >> imag1;
    cin >> real2 >> imag2;

    Complex C1(real1, imag1);
    Complex C2(real2, imag2);

    cout << "Enter your choice : " << endl;
    int choice;
    cin >> choice;

    if (choice == 1)
    {
        C1.add(C2);
        C1.display();
        C2.display();
    }

    else if (choice == 2)
    {
        C1.multiply(C2);
        C1.display();
        C2.display();
    }

    else
    {
        cout << "Wrong Choice : " << endl;
        return 0;
    }
}