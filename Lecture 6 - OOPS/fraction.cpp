#include<iostream>
using namespace std;
class Fraction
{
    private:
    int numr,denom;

    public:
    Fraction(int numr , int denom)
    {
        this -> numr = numr;
        this -> denom = denom;
    }

    void print()
    {
        cout<<this-> numr <<" / "<<this  -> denom<<endl;
    }

    void simplify()
    {
        int gcd=1;
        int j = min(this-> numr,this-> denom);
        for(int i=1; i<=j ; i++)
        {
            if(this->numr % i== 0 && this->denom % i== 0)
            {
                gcd=i;
            }
        }
        this-> numr = this-> numr / gcd;
        this-> denom = this-> denom / gcd;
    }

    void add(const Fraction &f)//pass by reference  ~using const becoz  i just want to see not to over write through f
    {
        int lcm = denom * f.denom;
        int x = lcm / denom;
        int y = lcm / f.denom;
        int num = x*numr + y*f.numr;

        numr=num;
        denom=lcm;

        simplify();
    }
};

int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);

    f1.add(f2);

    f1.print();
    f2.print();



}    