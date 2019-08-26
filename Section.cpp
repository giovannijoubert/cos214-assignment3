#include "Section.h"
#include <iostream>
#include <algorithm>

void Section::add(Section * s){
}

void Section::remove(){
}

void Section::attach(Observer* o){
    observerList.push_back(o);
}

void Section::detach(Observer* o){
    observerList.erase(std::remove(observerList.begin(), observerList.end(), o), observerList.end());
}

void Section::notify(){
    for ( auto &i : observerList ) {
        i->update();
    }
}