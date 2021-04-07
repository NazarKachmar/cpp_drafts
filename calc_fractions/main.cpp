//dorobitu
#include <iostream>
#include "functions_fractions.h"
using namespace std;

int main()
{
    char op;
    Drib a,b,r;
    cout<<"first: "<<endl;
    cin>>a;
    cout<<endl<<"operator:";
    cin>>op;
    cout<<endl<<"second: "<<endl;
    cin>>b;
    if(a.zn==0||b.zn==0)
    {
        cout<<"0 in denominator"<<endl;
        return 0;
    }
    else
    {
        switch (op)
        {
           case '+':
           {
               r = a + b;
               break;
           }
           case '-':
           {
               r = a - b;
               break;
           }
           case '*':
           {
               r = a * b;
               break;
           }
           case '/':
           {
               r = a / b;
               if(r.zn==0)
               {
                   cout<<"result is 0 in denominator"<<endl;
                   return 0;
               }
               break;
           }
           default:
           {
               cout<<"bad operator";
               return 0;
           }
        }
        cout<<"result:"<<a<<op<<b<<"="<<r<<endl;
    }
    return 0;
}
