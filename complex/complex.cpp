#include <iostream>
#include "complex.h"

using namespace std;

Complex::Complex(){count++;};

Complex::Complex(double a,double b)
{
setReel(a);
setIm(b);
count++;
}

void Complex::setReel(double a)
{
reel=a;
}



void Complex::setIm(double a)
{
im=a;
}

double Complex::getReel()
{
return reel;
}

double Complex::getIm()
{
return im;
}

ostream & operator <<(ostream &,Complex &r)
{
cout<<r.getReel()<<"+"<<r.getIm()<<"i"<<endl;
}

Complex operator >>(istream &, Complex  &r)
{
cin>>r.reel>>r.im;
}

Complex operator +(const Complex &r,const Complex &a)
{
Complex b;
--b.count;
b.reel=r.reel+a.reel;
b.im=r.im+a.im;

return b;
}

bool operator == (const Complex &r,const Complex &a)
{
if(r.im==a.im&&r.reel==a.reel)
return 1;
else 
return 0;

}
Complex & Complex::operator =( const Complex& r) 
{

reel=r.reel;
im=r.im;

return *this;
}

Complex operator-(const Complex &r,const Complex &a)
{
Complex b;
--b.count;
b.reel=r.reel-a.reel;
b.im=r.im-a.im;

return b;
}

Complex operator *(const Complex &r,const Complex &a)
{
Complex b;
--b.count;
b.reel=(r.reel*a.reel)+(-1*(r.im*a.im));
b.im=r.reel*a.im+a.reel*r.im;
return b;
}

int Complex::getCount()
{
return count;
}

int Complex::count=0;






