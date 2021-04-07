#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x=5;
    size_t n=5;
    int *ptr=new int[n];
    size_t el_n=0;
    cout<<"Input massive: "<<endl;
    while(x!=0)
    {
        cin>>x;
        ptr[el_n]=x;
        ++el_n;
        if(el_n>=n)
        {
            int * nptr = new int[5+n];
            for(int i=0;i<n;i++)
            {
                nptr[i]=ptr[i];
            }
            n+=5;
            delete[] ptr;
            ptr=nptr;

        }
    }
cout<<"Your massive: ";
for(int i=0;i<el_n;i++)
  cout<<" "<<ptr[i];
    return 0; 
}
