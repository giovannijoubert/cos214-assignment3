#include "Track.h"
#include <iostream>

void Track::print(){
    for(std::size_t i=0; i<sections.size(); ++i){
        sections[i]->print();
        if(i+1 != sections.size())
            cout << endl;
    }
}

void Track::add(Section* s){
    sections.push_back(s); 
}

void Track::remove(){
    sections.pop_back();
}

bool Track::hasCrash(){
    return crash;
}
void Track::setCrash(bool c){
    crash = c;
}