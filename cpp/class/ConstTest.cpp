#include "ConstTest.h"

#include <iostream>
using namespace std;


ConstTest::ConstTest(int x, int y){
    _x = x;
    _y = y;
}

int ConstTest::getX(){
    return _x;
}

int ConstTest::getConstX() const {
    return _x;
}


