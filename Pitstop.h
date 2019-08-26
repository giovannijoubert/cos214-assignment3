#ifndef PITSTOP_H
#define PITSTOP_H

#include "Decorator.h"
#include <string>

using namespace std;

  class Pitstop : public Decorator {
		
	  public:
        void print();
	};

#endif