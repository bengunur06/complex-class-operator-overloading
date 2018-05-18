#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
Complex c;
Complex e;
Complex q;
cin>>c;
cin>>e;
q=(c*e);
cout<<q<<endl;
Complex a(5,7);
cout<<"a taken by userdefined"<<endl<<endl;

cout<<a<<endl<<endl;
cout<<"enter b"<<endl;
Complex b;
cin>>b;
cout<<"b taken by cin"<<endl<<"enter f"<<endl;

Complex  f;
cin>>f;
cout<<"f+b is :"<<endl;

b=f+b;

cout<<b<<endl;

Complex p;
cin>>p;
if(p==a)
cout<<"yes same"<<endl;
else 
cout<<"nope not same"<<endl;
p=f-b;

cout<<p;
cout<<"object count "<<p.getCount()<<endl;









}
