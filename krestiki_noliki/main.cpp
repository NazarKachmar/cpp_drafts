#include <iostream>
#include <ctime>
using namespace std;

char f[10];

int move_correct(int move);

void draw_field(char plr,int move);

int win_check(char plr);

int move_check(int win);

int pc_move();

int main()
{
    srand(time (0));
    int pc=0;
    char game='y';
    while(game=='y'){
        cout<<"Do you want to play with Computer?\nYes-1, or no-0: ";
        cin>>pc;
        cout<<endl;
        int win=0;
        int move=0;
        char plr='X';
        draw_field(plr,0);
        while(win==0){
            cout<<"Move "<<plr<<" player:";
            if(plr=='O'&&pc>0)
                move=pc_move();
            else{
            cin>>move;
            move=move_correct(move);
            }
            cout<<endl;
            draw_field(plr,move);
            win=win_check(plr);
            win=move_check(win);
            plr=='X'? plr='O':plr='X';
   }
       cout<<"Do you want one more game?\nYes - y, or not - n.\nYour choise:";
       cin>>game;
       cout<<endl;
    }
    return 0;
}

int move_correct(int move){
    int t=0;
    while(t==0){
       if(move>=1&&move<=9){
          if(f[move]=='_'||f[move]==' ')
             t=1;
          else{
             cout<<"You cant move here! New turn: ";
             cin>>move;
          }

       }
       else{
          cout<<"Input value from 1 to 9! New turn: ";
          cin>>move;
       }
    }
    return move;
}

void draw_field(char plr,int move){
    if(move==0)
    {
       f[1]='_';
       f[2]='_';
       f[3]='_';
       f[4]='_';
       f[5]='_';
       f[6]='_';
       f[7]=' ';
       f[8]=' ';
       f[9]=' ';
    }
    f[move]=plr;
    cout<<f[1]<<"|"<<f[2]<<"|"<<f[3]<<endl;
    cout<<f[4]<<"|"<<f[5]<<"|"<<f[6]<<endl;
    cout<<f[7]<<"|"<<f[8]<<"|"<<f[9]<<endl<<endl;

}

int win_check(char plr){
    int win=0;
        if(((f[1]=='X')&&(f[2]=='X')&&(f[3]=='X'))||((f[1]=='O')&&(f[2]=='O')&&(f[3]=='O'))||
           ((f[4]=='X')&&(f[5]=='X')&&(f[6]=='X'))||((f[4]=='O')&&(f[5]=='O')&&(f[6]=='O'))||
           ((f[7]=='X')&&(f[8]=='X')&&(f[9]=='X'))||((f[7]=='O')&&(f[8]=='O')&&(f[9]=='O'))){
            cout<<"Win "<<plr<<" player. Congratulations!"<<endl<<endl;
            win++;
        }

        if((f[1]=='X'&&f[4]=='X'&&f[7]=='X')||(f[1]=='O'&&f[4]=='O'&&f[7]=='O')||
           (f[2]=='X'&&f[5]=='X'&&f[8]=='X')||(f[2]=='O'&&f[5]=='O'&&f[8]=='O')||
           (f[3]=='X'&&f[6]=='X'&&f[9]=='X')||(f[3]=='O'&&f[6]=='O'&&f[9]=='O')){
            cout<<"Win "<<plr<<" player. Congratulations!"<<endl<<endl;
            win++;
        }

        if(((f[1]=='X'&&f[5]=='X'&&f[9]=='X')||(f[1]=='O'&&f[5]=='O'&&f[9]=='O'))||
           ((f[3]=='X'&&f[5]=='X'&&f[7]=='X')||(f[3]=='O'&&f[5]=='O'&&f[7]=='O'))){
            cout<<"Win "<<plr<<" player. Congratulations!"<<endl<<endl;
            win++;
        }

    return win;
}

int move_check(int win){
    if (win>0){return 1;}
    if(f[1]!='_'&&f[2]!='_'&&f[3]!='_'&&
       f[4]!='_'&&f[5]!='_'&&f[6]!='_'&&
       f[7]!=' '&&f[8]!=' '&&f[9]!=' '){
        cout<<"Draw!!!"<<endl;
        win++;
    }
    return win;
}

int pc_move(){
    int move=1+rand()%9;
    int t=0;
    while(t==0){
       if(move>=1&&move<=9){
          if(f[move]=='_'||f[move]==' ')
             t=1;
          else{
             move=1+rand()%9;
          }
       }
       else{
          move=1+rand()%9;
       }
    }
    cout<<move;
    return move;
}
