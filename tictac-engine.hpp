#ifndef TICTAC-ENGINE_HPP_INCLUDED
#define TICTAC-ENGINE_HPP_INCLUDED

#include "widget.hpp"
#include "tictactoe.hpp"
#include "textbox.hpp"
using namespace genv;
class Engine:public Widget{
Tictactoe* sets[20][20];
Textbox* actual_player;
Textbox* declare_winner;
bool gameover=false;
int winner=0;

public:
    Engine(int,int,int,int);
    virtual void draw()const;
    virtual void handle(event ev);
    virtual bool test_winner(int);
    virtual bool is_filled();
    virtual void restart();


};



#endif // TICTAC-ENGINE_HPP_INCLUDED
