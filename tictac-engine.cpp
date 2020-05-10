#include "tictac-engine.hpp"
using namespace std;
using namespace genv;
int turn=0;
Engine::Engine(int x,int y,int sx,int sy):Widget(x,y,sx,sy)
{
    for(size_t i=0; i<400;i++)
    {
        Tictactoe* a=new Tictactoe((i%20)*30,x+(i/20)*30,30,30);
        sets[i%20][i/20]= a;
    }
        declare_winner=new Textbox(200,30,125,30,"");



}
void Engine::draw()const
{
    for(size_t i=0; i<400; i++)
    {
        sets[i%20][i/20]->draw();
    }
    declare_winner->draw();

}
void Engine::handle(event ev)
{   if(!gameover){
    for(size_t i=0; i<400; i++)
    {
        sets[i%20][i/20]->handle(ev);
    }
        if(test_winner(1)){
                winner=1;
                gameover=true;
            }
        else if(test_winner(2)){
            winner=2;
            gameover=true;
        }
        }
    else{
        if(winner==1){
            declare_winner->changeText("P1 wins :D");
        }
        else if(winner==2){
            declare_winner->changeText("P2 wins :D");
        }
        else if(winner==0 && is_filled()){
            declare_winner->changeText("DRAW");
        }
        if(ev.type==ev_key && ev.keycode==key_f1){
            for(size_t i=0;i<20;i++){
            for(size_t j=0;i<20;i++){
            sets[i][j]->reset();
        }
    }
    turn=0;
    winner=0;
    declare_winner->changeText("");
    gameover=false;
        }
    }
}
bool Engine::test_winner(int player)
{
    for(size_t i=0; i<16; i++)
    {
        for(size_t j=0; j<20;j++)
        {
            if(sets[i][j]->actual_player()==player && sets[i+1][j]->actual_player()==player &&
                    sets[i+1][j]->actual_player()==player && sets[i+2][j]->actual_player()==player &&
                    sets[i+3][j]->actual_player()==player && sets[i+4][j]->actual_player()==player )
            {
                return true;
            }
        }
    }
    for(int i=0; i<20; i++)
    {
        for(int j=0; j<16; j++)
        {
            if (sets[i][j]->actual_player() == player && sets[i][j+1]->actual_player() == player &&
                    sets[i][j]->actual_player() == player && sets[i][j+3]->actual_player() == player &&
                    sets[i][j+4]->actual_player() == player)
                return true;
        }
    }

    for(int i=0; i<16; i++)
{
    for(int j=0; j<16; j++)
    {
        if (sets[19-i][j]->actual_player() == player && sets[19-(i+1)][j+1]->actual_player() == player &&
                sets[19-(i+2)][j+2]->actual_player() == player && sets[19-(i+3)][j+3]->actual_player() == player &&
                sets[19-(i+4)][j+4]->actual_player() == player)
            return true;
    }
}
for(int i=0; i<16; i++)
{
    for(int j=0; j<16; j++)
    {
        if (sets[i][j]->actual_player() == player && sets[i+1][j+1]->actual_player() == player &&
                sets[i+2][j+2]->actual_player() == player && sets[i+3][j+3]->actual_player() == player &&
                sets[i+4][j+4]->actual_player() == player)
            return true;
    }
}
return false;
}
bool Engine::is_filled(){
   int set_flag=0;
    for(size_t i=0;i<20;i++){
        for(size_t j=0;j<20;j++){
            if(sets[i][j]->actual_player()!=0){
                set_flag++;
            }
        }
    }
    if(set_flag==400){
        return true;
    }
}
void Engine::restart(){

}
