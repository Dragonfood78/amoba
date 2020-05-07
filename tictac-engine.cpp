#include "tictac-engine.hpp"
using namespace std;
using namespace genv;

Engine::Engine(int x,int y,int sx,int sy):Widget(x,y,sx,sy)
{
    for(size_t i=0;i<500){
        Tictactoe* a=new Tictactoe((i%10)*30,x+(i/10)*30,30,30);
        sets[i%10][i/10]= a;
    }


}
void Engine::draw()const{
    for(size_t i=0;i<500;i++){
       sets[i%10][i/10]->draw();
    }

}
void Engine::handle(event ev){
    for(size_t i=0;i<500;i++){
       sets[i%10][i/10]->handle();
    }

}
bool Engine::test_winner(int player){
    for(size_t i=0;i<24;i++){
        for(size_t j=0;j<28){
            if(sets[i][j].player==player && sets[i+1][j].player==player && sets[i+1][j].player==player && sets[i+2][j].player==player && sets[i+3][j].player==player && sets[i+4][j].player==player && && sets[i+5][j].player==player)
            {
                return true;
            }
            }
        }
    }
}
