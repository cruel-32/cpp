#ifndef Person_H
#define Person_H

#include <iostream>
using namespace std;

class Person {
    public : string _name;
        int _age;

    private : float _koreaScore, _englishScore, _mathScore;

    //이 버전의 컴파일러에서는 생성자 함수를 포함한 모든 멤버함수에게 public을 달아줘야 사용가능한가 보다. default값이 private 인듯
    public : float getKoreaScore();
        float getEnglishScore();
        float getMathScore();

        void setKoreaScore(float score);
        void setEnglishScore(float score);
        void setMathScore(float score);

        Person(); //생성자 함수
        Person(string name, int age, float koreaScore, float englishScore, float mathScore); //생성자 함수 (오버로딩)
};
#endif