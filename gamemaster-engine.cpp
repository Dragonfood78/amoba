#include "gamemaster-engine.h"
#include "tictac-engine.hpp"
CurrentGame::CurrentGame():Gamemaster(){
    Engine* Play_area= new Engine(60,0,600,600);
    add_widget(Play_area);
}
