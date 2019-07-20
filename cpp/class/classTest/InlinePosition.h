#ifndef InlinePosition_H
#define InlinePosition_H

#include <iostream>
using namespace std;

class InlinePosition {
    private : int _x, _y;

    //이 버전의 컴파일러에서는 생성자 함수를 포함한 모든 멤버함수에게 public을 달아줘야 사용가능한가 보다. default값이 private 인듯
    public :
        int getX();
        int getY();

        void setX(int x);
        void setY(int y);

         //생성자 함수
        InlinePosition(int x, int y); //생성자 함수 (오버로딩)
};

inline void InlinePosition::setX(int x){
    _x = x;
}

inline void InlinePosition::setY(int y){
    _y = y;
}



#endif