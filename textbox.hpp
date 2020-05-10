#ifndef LABEL_HPP_INCLUDED
#define LABEL_HPP_INCLUDED
#include <string>
#include "widget.hpp"
#include "graphics.hpp"
#include "textbox.hpp"

using namespace std;
class Textbox : public Widget {
    string Text;
public:
    Textbox(int x, int y, int sx, int sy, string a);
    virtual void draw() const ;
    virtual void handle(genv::event ev);
    virtual void changeText(string newText);
};

#endif // LABEL_HPP_INCLUDED
