#include <vector>
#include <fstream>
#include <iostream>
#include <ostream>
#include "graphics.hpp"
#include "szambeallito.hpp"
#include "szambeallito.cpp"

#include "widget.hpp"
#include "tictactoe.hpp"
using namespace genv;
using namespace std;

int main()
{
    Tictactoe* a=new Tictactoe(300,200,20,40);
    vector<Widget*> w;
    event ev;
    int focus=-1;
    while(gin >> ev) {
        if (ev.type == ev_mouse && ev.button==btn_left) {
            for (size_t i=0;i<w.size();i++) {
                if (w[i]->flag(ev.pos_x, ev.pos_y)) {
                        focus = i;
                }
            }
        }
        if (focus!=-1) {
            w[focus]->handle(ev);
        }
        for (size_t i=0;i<w.size();i++) {
            w[i]->draw();
        }

        gout << refresh;


        }


    return 0;
}
