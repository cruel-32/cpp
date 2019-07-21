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

int InlinePosition::getExternalX(InlinePosition testIp, int (InlinePosition::*getExX)()){
    cout << "getExternalX call" << endl;
    cout << "testIp : " << &testIp << endl;

    int result = (testIp.*getExX)();
    cout << "testIp.getX() : " << testIp.getX() << endl;

    cout << "getExX : " << &getExX << endl; //주소값은 알수 있지만...
    // cout << "getExX : " << (*getExX)() << endl; //인스턴스주소를 모르면 실행 불가능...

    return result;
}