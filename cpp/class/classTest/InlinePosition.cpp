#include "InlinePosition.h"

#include <iostream>
using namespace std;

InlinePosition::InlinePosition(int x, int y)
    :_x(x), _y(y)
{

}

int InlinePosition::getX(){
    return _x;
}

int InlinePosition::getY(){
    return _y;
}