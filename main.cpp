#include "Track.h"
#include "Section.h"
#include "Straight.h"
#include "Turn.h"
#include "Pitstop.h"
#include "Decorator.h"
#include "Chicane.h"
#include "Startline.h"
#include "FlagObserver.h"
#include "Observer.h"
#include "GravelTrap.h"
#include "Barrier.h"
#include <iostream>


int main() {
  
    Straight * Start = new Straight();
    Decorator * StartLine = new Startline();
    StartLine->add(Start);

    Section * Curves = new Track();
    Curves->add(new Straight());
    Turn * t1 = new Turn(90);
    Decorator * gt = new GravelTrap();
    gt->add(t1);
    Curves->add(gt);

    Section * ChicaneMayhem = new Track();
    Decorator * bar = new Barrier();
    bar->add(new Chicane());
    ChicaneMayhem->add(bar);
    ChicaneMayhem->add(new Chicane());
    ChicaneMayhem->add(bar);

    Track * myTrack = new Track();

    myTrack->add(StartLine);
    myTrack->add(new Straight());
    myTrack->add(Curves);
    myTrack->add(new Chicane());
    myTrack->add(Curves);
    myTrack->add(ChicaneMayhem);



    cout <<"Section \t Added decorations" << endl;
    myTrack->print();
    cout << endl;

    cout << "<<<<<Deleting last added Track section" << endl;
    myTrack->remove();
    cout <<"Section \t Added decorations" << endl;
    myTrack->print();
    cout << endl;

    FlagObserver * fo1 = new FlagObserver(myTrack);
    FlagObserver * fo2 = new FlagObserver(myTrack);

    myTrack->attach(fo1);
    myTrack->attach(fo2);

    cout << "Flag Observer 1 Flag Status: ";
    fo1->print();
    cout << "Flag Observer 2 Flag Status: ";
    fo2->print();

    cout << "<<<<<Crash occuring " << endl;
    myTrack->setCrash(true);  

    cout << "<<<<<Detaching Flag Observer 2" << endl;
    myTrack->detach(fo2);
    
    cout << "<<<<<Notifying Observers" << endl;
    myTrack->notify();

    cout << "Flag Observer 1 Flag Status: ";
    fo1->print();
    cout << "Flag Observer 2 Flag Status: ";
    fo2->print();


    cout << "<<<<<Attaching Flag Observer 2" << endl;
    myTrack->attach(fo2);
    
    cout << "<<<<<Crash Fixed" << endl;
    myTrack->setCrash(false);

    cout << "<<<<<Notifying Observers" << endl;
    myTrack->notify();

    cout << "Flag Observer 1 Flag Status: ";
    fo1->print();
    cout << "Flag Observer 2 Flag Status: ";
    fo2->print();

    delete Start;
    delete StartLine;
    delete bar;
    delete fo1;
    delete fo2;
    
    return 0;


}