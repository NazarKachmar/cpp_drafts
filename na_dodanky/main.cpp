#include <iostream>

int main()
{
     int a,b,c,v;
     std:: cout<<"input value: ";
     std:: cin>>v;
     a=v/100%10;
     b=v/10%10;
     c=v%10;
     std:: cout<<std::endl<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c;

    return 0;
}
