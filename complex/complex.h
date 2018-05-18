#include <iostream>
using namespace std;


class Complex {

friend ostream & operator <<(ostream &, Complex &r);
friend Complex operator >>(istream &,Complex  &r);
friend Complex operator +(const Complex &r,const Complex &a);
friend bool operator == (const Complex &r,const Complex &a);
friend Complex operator-(const Complex &r,const Complex &a);
friend Complex operator *(const Complex &r,const Complex &a);

public :
Complex& operator =(const  Complex &r) ;

Complex();
Complex(double ,double);

void setReel(double);
void setIm(double);

double getReel();
double getIm();

int getCount();
static int count;
private :

double reel;
double im;
};


