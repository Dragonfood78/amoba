#include "tictac-engine.hpp"
using namespace std;
using namespace genv;

Engine::Engine(int x,int y,int sx,int sy):Widget(x,y,sx,sy)
{
    for(size_t i=0; i<400)
    {
        Tictactoe* a=new Tictactoe((i%20)*30,x+(i/20)*30,30,30);
        sets[i%20][i/20]= a;
    }



}
void Engine::draw()const
{
    for(size_t i=0; i<400; i++)
    {
        sets[i%20][i/20]->draw();
    }

}
void Engine::handle(event ev)
{
    for(size_t i=0; i<400; i++)
    {
        sets[i%20][i/20]->handle();
    }
    if(!gameover){
        if(test_winner(1)){
                winner=1;
            }
        else if(test_winner(2)){
            winner=2;
        }
        }
    }
bool Engine::test_winner(int player)
{
    for(size_t i=0; i<16; i++)
    {
        for(size_t j=0; j<20)
        {
            if(sets[i][j]->actual_player()==player && sets[i+1][j]->actual_player()==player &&
                    sets[i+1][j]->actual_player()==player && sets[i+2][j]->actual_player()==player &&
                    sets[i+3][j]->actual_player()==player && sets[i+4][j]->actual_player()==player &&
                    sets[i+5][j]->actual_player()==player)
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
