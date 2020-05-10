#include "gamemaster.hpp"
#include "graphics.hpp"

using namespace genv;
Gamemaster::Gamemaster(){
    focus=-1;}
void Gamemaster::add_widget(Widget* c){
    w.push_back(c);
}
 void Gamemaster::Run(){
    gout.open(XX,YY);
    event ev;
    while(gin >> ev) {
        if (ev.type == ev_mouse ) {
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

}
