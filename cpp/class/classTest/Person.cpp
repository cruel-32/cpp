#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(){
    cout << "default constructor" << endl;
    _name = "default";
    _age = 20;
    _koreaScore = 0;
    _englishScore = 0;
    _mathScore = 0;
}

Person::Person(string name, int age = 20, float koreaScore = 0, float englishScore = 0, float mathScore = 0){
    cout << "overloading constructor" << endl;
    _name = name;
    _age = age;
    _koreaScore = koreaScore;
    _englishScore = englishScore;
    _mathScore = mathScore;
}

float Person::getKoreaScore(){
    return _koreaScore;
}

float Person::getEnglishScore(){
    return _englishScore;
}

float Person::getMathScore(){
    return _mathScore;
}

void Person::setKoreaScore(float score){
    _koreaScore = score;
}

void Person::setEnglishScore(float score){
    _englishScore = score;
}

void Person::setMathScore(float score){
    _mathScore = score;
}