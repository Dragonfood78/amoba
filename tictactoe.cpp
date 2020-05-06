#include "tictactoe.hpp"

using namespace std;
using namespace genv;
Tictactoe::Tictactoe(int x,int y,int sx,int sy):Widget(x,y,sx,sy){
    player=1;

}
void Tictactoe::draw()const{
    gout.open(400,400);
    for(size_t i=1;i<400;i=i+26){
        gout<<move_to(i,1)<<line_to(i,400)<<move_to(1,i)<<line_to(400,i);
    }
void Tictactoe::handle(event ev){
    if(ev.type==ev_mouse && flag(ev.pos_x,ev.pos_y)&& ev.button==btn_left){
        turn++;
        if(turn%2==0){
            player=2;
        }
        if(turn%2!=0){
            player=1;
        }
    }
}
void Tictactoe::drawplayers(event ev){
    if(player==1 && ev.type==ev_mouse && ev.button==btn_left){
        gout<<move_to(ev.pos_x+13,ev.pos_y-13)<<line_to(ev.pos_x-13,ev.pos_y+13);
        gout<<move_to(ev.pos_x-13,ev.pos_y-13)<<line_to(ev.pos_x+13,ev.pos_y+13);
    }
    if(player==2 && ev.type==ev_mouse && ev.button==btn_left){
        gout<<move_to(ev.pos_x,ev.pos_y-5)<<line_to<ev.pos_x+6,ev.pos_y+8)<<line_to(ev.pos_x-12,ev.pos_y+8)<<line_to(ev.pos_x,ev_pos_y-5);
    }
}
