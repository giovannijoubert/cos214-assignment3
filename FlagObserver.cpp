#include "FlagObserver.h"
#include <iostream>

FlagObserver::FlagObserver(Track* t){
    raceTrack = t;
}

void FlagObserver::update(){
    waving = raceTrack->hasCrash();
}

void FlagObserver::print(){
    if(waving)
        cout << "Flags waving" << endl;
    else 
        cout << "Flags down" << endl;
}

