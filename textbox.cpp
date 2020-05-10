#ifndef TEXTBOX_CPP_INCLUDED
#define TEXTBOX_CPP_INCLUDED
#include "textbox.hpp"

using namespace genv;
using namespace std;
Textbox::Textbox(int x, int y, int sx, int sy, string new_Text)
    : Widget(x,y,sx,sy),Text(new_Text)
{
}

void Textbox::draw() const
{
    gout << move_to(xhely+1, yhely+1)<<color(0,0,0)<<box(XX-2, YY-2);
    gout << move_to(XX+2, YY+20)<<color(88,44,44)<< text(Text);
}

void Textbox::handle(event ev)
{
}

void Textbox::changeText(string newText){
    Text = newText;
}



#endif // TEXTBOX_CPP_INCLUDED
