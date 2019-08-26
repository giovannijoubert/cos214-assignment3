#include "Decorator.h"
#include <iostream>

Decorator::Decorator(){
    section = nullptr;
}

void Decorator::print(){
    section->print();
}

void Decorator::add(Section* s){
    if(section == nullptr){
        section = s;
    } else {
        section->add(s);
    }
}

void Decorator::remove(){
    if(section != nullptr)
        section = nullptr;
}

