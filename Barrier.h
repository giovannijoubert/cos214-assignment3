#ifndef BARRIER_H
#define BARRIER_H

#include "Decorator.h"
#include <string>

using namespace std;

  class Barrier : public Decorator {
		
	  public:
        void print();
	};

#endif