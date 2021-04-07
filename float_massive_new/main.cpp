
#include <iostream>
#include <cmath>
using namespace std;

class massive
{
public:
    int value;
    size_t capasity;
    size_t el_n;

    int new_mass(int **ptr,size_t n)
    {
        int **nptr = new int*[5+n];
        for(size_t i=0;i<n;i++)
        {
            nptr[i] = ptr[i];
        }
        n+=5;
        delete[] ptr;
        ptr=nptr;
        return n;
    }
};


int main()
{
    massive mas1;
    mas1.value = 5;
    mas1.capasity=5;
    mas1.el_n=0;
    int *ptr=new int[mas1.capasity];
    cout<<"Input massive:"<<endl;
    while(mas1.value!=0)
    {
        cin>>mas1.value;
        ptr[mas1.el_n]=mas1.value;
        ++mas1.el_n;
        if(mas1.el_n>=mas1.capasity)
        mas1.capasity=mas1.new_mass(&ptr,mas1.capasity);
    }
cout<<"Your massive: ";
for(size_t i=0;i<mas1.el_n-1;i++)
  cout<<" "<<ptr[i];
    return 0;
}
