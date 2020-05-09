#include "tictactoe.hpp"

using namespace std;
using namespace genv;
Tictactoe::Tictactoe(int x,int y,int sx,int sy):Widget(x,y,sx,sy){
player=0;
}
void Tictactoe::draw()const{
    if(player==0){
        gout << move_to(xhely, yhely) << color(255,255,255) << box(XX, YY);
        gout << move_to(xhely+1, yhely+1) << color(0,0,0) << box(XX-2, YY-2);
    }
    else if(player==1){
        gout << move_to(xhely, yhely) << color(255,255,255) << box(XX, YY);
        gout << move_to(xhely+1, yhely+1) << color(255,0,0) << box(XX-2, YY-2);
    }
    else if(player==2){
        gout << move_to(xhely, yhely) << color(255,255,255) << box(XX, YY);
        gout << move_to(xhely+1, yhely+1) << color(0,0,255) << box(XX-2, YY-2);
    }

}
extern int turn;
void Tictactoe::handle(event ev){
    if(ev.type==ev_mouse && ev.button==btn_left&& flag(ev.pos_x,ev.pos_y) && player==0){
        if(turn%2==0){
            player=2;
        }
        else{
            player=1;
        }
        turn++;
    }
}
void Tictactoe::reset(){
    player=0;
}
