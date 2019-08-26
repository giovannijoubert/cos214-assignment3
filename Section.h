#ifndef SECTION_H
#define SECTION_H

#include <vector>
#include "Observer.h"
#include <string>


using namespace std;

  class Section {
		
    public:
        virtual void print()=0;
        virtual void add(Section *);
        virtual void remove();
        void attach(Observer*);
        void detach(Observer*);
        void notify();
    private:
        vector<Observer*> observerList;

	};

#endif