#include<iostream>
#include "functions_fractions.h"
using namespace std;

Drib& operator+=(Drib& a,int b)
{
    a.ch=a.zn*b+a.ch;
    a.drib_prepare();
    return a;
}

Drib operator+(Drib a,const Drib& b)
{
    return a+=b;
}
Drib operator+(Drib a,int b)
{

    return a+=b;
}
Drib operator+(int a,Drib b)
{
    return b+=a;
}

Drib operator-=(Drib& a,int b)
{
    a.ch=a.zn*b-a.ch;
    a.drib_prepare();
    return a;
}


Drib operator-(const Drib& a,const Drib& b)
{
    return a-=b;
}

Drib operator-(Drib a,const Drib& b)
{
    return a-=b;
}
Drib operator-(Drib a,int b)
{

    return a-=b;
}
Drib operator-(int a,Drib b)
{
    return b-=a;
}

Drib operator*=(const Drib& a,const Drib& b)
{
    Drib r;
    r.ch=a.ch*b.ch;
    r.zn=a.zn*b.zn;
    r.drib_prepare();
    return r;
}

Drib operator*(const Drib& a,const Drib& b)
{
    return a*=b;
}

Drib operator/=(const Drib& a,const Drib& b)
{
    Drib r;
    r.ch=a.ch*b.zn;
    r.zn=b.ch*a.zn;
    r.drib_prepare();
    return r;
}

Drib operator/(const Drib& a,const Drib& b)
{
    return a/=b;
}

istream& operator>>(istream& in,Drib& drb)
{
    char m;
    in>>drb.ch>>m>>drb.zn;
    return in;
}

ostream& operator<<(ostream& out,Drib drb)
{
    out<<drb.ch<<"/"<<drb.zn;
    return out;
}


