#include <iostream>
using namespace std;

int main()
{
  int c;
  int arr[8];
  cout<<"input massive:"<<endl;
  for(int i=0;i<8;i++)
  {
  cin>>arr[i];
  }
  cout<<"reverse massive: ";
  for(int ia=7;ia>=0;ia--)
  {
      cout<<arr[ia];

  }

  cout<<endl<<endl;
  cout<<"change nearby: ";

  for(int ib=0;ib<8;ib+=2)
  {
      c=arr[ib];
      arr[ib]=arr[ib+1];
      arr[ib+1]=c;
  }

  for(int i=0;i<8;i++)
    cout<< arr[i] << " ";

    return 0;
}
