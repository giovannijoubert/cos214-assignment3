#ifndef TURN_H
#define TURN_H

#include "Section.h"
#include <string>

using namespace std;

  class Turn : public Section {
		
	    public:
            Turn(int);
            void print();
        private:
            int rotation;
	};

#endif