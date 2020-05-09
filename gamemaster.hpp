#ifndef GAMEMASTER_HPP_INCLUDED
#define GAMEMASTER_HPP_INCLUDED
#include "graphics.hpp"
#include "widget.hpp"
#include <vector>

using namespace std;
class Gamemaster {
protected:
    int XX = 600;
     int YY = 700;
     int focus;
    vector <Widget*> w;
public:
    Gamemaster();
    virtual void Run();
    virtual void add_widget(Widget*);
};


#endif // GAMEMASTER_HPP_INCLUDED
