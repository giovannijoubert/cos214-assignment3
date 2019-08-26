#ifndef TRACK_H
#define TRACK_H

#include "Section.h"
#include <string>
#include <vector>

using namespace std;

  class Track : public Section{
		
        public:
            void print();
            void add(Section*);
            void remove();
            bool hasCrash();
            void setCrash(bool);
        private:
            vector<Section*> sections;
            bool crash;
	};

#endif