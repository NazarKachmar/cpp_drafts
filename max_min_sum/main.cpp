#include <iostream>
using namespace std;
int main()
{
  int k,i,max,min,v,par=0,s=0,dod=0;
  cout<<"how many values?-";
  cin>>k;
  cout<<"Input "<<1<<" value"<<endl;
  cin>>max;
  min = max;
  for (i=2;i<=k;i++){
   if(v>max){
       max=v;
   }
   if(v<min){
       min=v;
   }
   if(v%2==0){
       par++;
   }
   if(v>0){
       dod++;
   }
   s+=v;
   cout<<"Input "<<i<<" value"<<endl;
   cin>>v;
  }
  cout<<endl;
  cout<<"max:"<<max
      <<". min:"<<min
      <<". par:"<<par
      <<". positive:"
      <<dod<<". sum:"
      <<s<<"."<<endl;
  return 0;
}
