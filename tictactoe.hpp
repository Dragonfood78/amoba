#ifndef TICTACTOE_HPP_INCLUDED
#define TICTACTOE_HPP_INCLUDED
#include "graphics.hpp"
#include "widget.hpp"
class Tictactoe :public Widget{
    int turn=1;
    int player=1;
public:
    Tictactoe(int x,int y,int sx,int sy);
    virtual void draw()const;
    virtual void handle(genv::event ev);
    virtual void drawplayers(genv::event);

};


#endif // TICTACTOE_HPP_INCLUDED
