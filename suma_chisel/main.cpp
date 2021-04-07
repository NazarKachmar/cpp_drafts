#include <iostream>
using namespace std;

int main()
{
  int a,s=0;
  cout<<"input value:";
  cin>>a;
  cout<<endl;
  while (a>0)
  {
      s+=a%10;
      a=a/10;
      cout<<a<<endl;
  }
  cout<<endl<<"Sum is:"<<s<<endl;
  return 0;
}
