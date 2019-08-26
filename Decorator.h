#ifndef DECORATOR_H
#define DECORATOR_H

#include "Section.h"
#include <string>

using namespace std;

  class Decorator : public Section{
		
        public:
            Decorator();
            void print();
            void add(Section*);
            void remove();
        private:
            Section* section;
	};

#endif