#ifndef FLAGOBSERVER_H
#define FLAGOBSERVER_H

#include "Observer.h"
#include "Track.h"
#include <string>

using namespace std;

  class FlagObserver : public Observer {
		
	  public:
        FlagObserver(Track*);
        void update();
        void print();

    private:
        Track* raceTrack;
        bool waving;
	};

#endif