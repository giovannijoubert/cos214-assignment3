#include "Turn.h"
#include <iostream>

Turn::Turn(int r){
    rotation = r;
}

void Turn::print(){
    if(rotation == 0)
        cout << "Right Turn";
    else if(rotation == 90)
        cout << "Left Turn";
}

