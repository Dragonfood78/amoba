#ifndef TICTAC-ENGINE_HPP_INCLUDED
#define TICTAC-ENGINE_HPP_INCLUDED
#include "widget.hpp"
#include "graphics.hpp"
class Engine:public Widget{
Tictactoe * sets[30][30];
public:
    Engine(int,int,int,int);
    virtual void draw()const;
    virtual void handle(genv:event ev);
    virtual bool test_winner(int);

};



#endif // TICTAC-ENGINE_HPP_INCLUDED
