#include "widget.hpp"
#include "graphics.hpp"
using namespace genv;

Widget::Widget(int x, int y, int sx, int sy) { //konstruktor
    _x = x;
    _y = y;
    _size_x = sx;
    _size_y = sy;
}

bool Widget::is_selected(int mouse_x, int mouse_y) const { //rajta van e az eg�r
    return mouse_x > _x && mouse_x < _x + _size_x && mouse_y >_y && mouse_y < _y +_size_y;
}

void Widget::draw() const { //widget kirajzol�sa
}

void Widget::handle(event ev) { //2idget "kezel�se"
}

