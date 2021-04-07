#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));

    int plr1_1,plr1_2,plr2_1,plr2_2,s1=0,s2=0,r,i,p=1;
    while (p==1){
        cout<<"How many raunds you want to play?-";
        cin>>r;
        cout<<endl;
        for(i=0;i<r;i++){
             plr1_1=rand()%6+1;
             plr1_2=rand()%6+1;
             plr2_1=rand()%6+1;
             plr2_2=rand()%6+1;
             s1=s1+plr1_1+plr1_2;
             s2=s2+plr2_1+plr2_2;

             cout<<"First player:"<<endl<<"1 cube-"<<plr1_1<<". 2 cube-"<<plr1_2<<"."<<endl;
             cout<<"Second player:"<<endl<<"1 cube-"<<plr2_1<<". 2 cube-"<<plr2_2<<"."<<endl<<endl;
        }
        cout<<"Total player 1-"<<s1<<". Total player 2-"<<s2<<"."<<endl<<endl;
        if(s1==s2){
            cout<<"DRAW"<<endl;
        }
        else{
            if(s1>s2){
               cout<<"FIRST PLAYER WIN.CONGRATULATIONS"<<endl;
            }
            else{
                     cout<<"SECOND PLAYER WIN.CONGRATULATIONS"<<endl;
            }
        }
        cout<<endl<<"One more time? Yes-1,No-0"<<endl<<"Your choise:";
        cin>>p;
    }
    return 0;
}
