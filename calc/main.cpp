#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double a,b,r;
    int i=0;
    char o;
/*
    while(! (cin >> a) )
    {
        cout << "Enter a number!" << endl;
        cin.clear();
        cin >> o;
    }

*/
    while(i==0)
    {
        cout<<"Put a: ";
        cin>>a;
        //cout<<endl;
        cout<<"Input operator: ";
        cin>>o;
        //cout<<endl;
        if(o=='r'||o=='s'||o=='c'||o=='t')
        {
            switch (o)
            {

            case 'r':
                r=sqrt(a);
                break;
            case 's':
                r=sin(a);
                break;
            case 'c':
                r=cos(a);
                break;
            case 't':
                r=tan(a);
                break;
            }
        }
        else
        {
            cout<<"Put b: ";
            cin>>b;
            //cout<<endl;
            switch (o)
            {
            case '+':
            {
                r=a+b;
                break;
            }
            case '-':
            {
                r=a-b;
                break;
            }
            case '*':
            {
                r=a*b;

                break;
            }
            case '/':
            {
                if (b==0)
                {
                    cout<<"Error!"<<endl;
                    return 0;
                }
                r=a/b;
                break;
            }
            default:
            {
                cout<<"Something wrong :("<<endl;
            }
            return 0;
            }
        }
        cout<<"Result is:"<<r<<endl<<endl;
        cout<<"If you want to continue press - 0.  If not - 1.\nYour choise:";
        cin>>i;
        cout<<endl;
    }
    cout<<endl;
    cout<<"TURNING OFF"<<endl;
    return 0;
}
