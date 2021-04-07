#ifndef FUNCTIONS_FRACTIONS_H
#define FUNCTIONS_FRACTIONS_H
#include<iostream>

struct Drib
{
  int ch,zn;
  Drib(int c, int z)
  {
  ch=c;
  zn=z;
  }
  Drib()
  {
      ch=0;
      zn=1;
  }
  void drib_prepare()
  {
      int t,a=ch,b=zn;
      while (b != 0)
      {
           t = b;
           b = a % b;
           a = t;
      }
      ch/=a;
      zn/=a;
      if(ch==0)
          zn=1;
      else if(zn<0)
      {
          ch=-ch;
          zn=-zn;
      }
  }

  Drib& operator+=(const Drib& b)
  {

      ch=ch*b.zn+b.ch*zn;
      zn=zn*b.zn;
      drib_prepare();
      return *this;
  }
};

Drib& operator+=(Drib& a,int b);

Drib operator+(Drib a,const Drib& b);

Drib operator+(Drib a,int b);

Drib operator+(int a,Drib b);

Drib operator-=(const Drib& a,const Drib& b);

Drib operator-(const Drib& a,const Drib& b);

Drib operator-(Drib a,const Drib& b);

Drib operator-(Drib a,int b);

Drib operator-(int a,Drib b);

Drib operator*(const Drib& a,const Drib& b);

Drib operator*=(const Drib& a,const Drib& b);

Drib operator/(const Drib& a,const Drib& b);

Drib operator/=(const Drib& a,const Drib& b);

std::istream& operator>>(std::istream& in,Drib& drb);

std::ostream& operator<<(std::ostream& out,Drib drb);


#endif // FUNCTIONS_FRACTIONS_H
