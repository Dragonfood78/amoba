#ifndef TICTACTOE_HPP_INCLUDED
#define TICTACTOE_HPP_INCLUDED
#include "graphics.hpp"
#include "widget.hpp"
class Tictactoe :public Widget{
    int player;
public:
    Tictactoe(int ,int ,int ,int );
    virtual void draw()const;
    virtual void handle(genv::event);
    virtual int actual_player(){return player;}

};


#endif // TICTACTOE_HPP_INCLUDED
