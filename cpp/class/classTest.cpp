#include <iostream>
using namespace std;

class Person {
    public : string _name;
    public : int _age;

    private : int _koreaScore, _englishScore, _mathScore;

    //이 버전의 컴파일러에서는 생성자 함수를 포함한 모든 멤버함수에게 public을 달아줘야 사용가능한가 보다. default값이 private 인듯
    public : int getKoreaScore();
    public : int getEnglishScore();
    public : int getMathScore();

    public : void setKoreaScore(int score);
    public : void setEnglishScore(int score);
    public : void setMathScore(int score);

    public : Person(); //생성자 함수
    public : Person(string name, int age, int koreaScore, int englishScore, int mathScore); //생성자 함수 (오버로딩)
};

Person::Person(){
    cout << "default constructor" << endl;
    _name = "default";
    _age = 20;
    _koreaScore = 0;
    _englishScore = 0;
    _mathScore = 0;
}

Person::Person(string name, int age = 20, int koreaScore = 0, int englishScore = 0, int mathScore = 0){
    cout << "overloading constructor" << endl;

    cout << "overloading constructor" << endl;
    cout << "overloading constructor" << endl;

    _name = name;
    _age = age;
    _koreaScore = koreaScore;
    _englishScore = englishScore;
    _mathScore = mathScore;
}

int Person::getKoreaScore(){
    return _koreaScore;
}

int Person::getEnglishScore(){
    return _englishScore;
}

int Person::getMathScore(){
    return _mathScore;
}

void Person::setKoreaScore(int score){
    _koreaScore = score;
}

void Person::setEnglishScore(int score){
    _englishScore = score;
}

void Person::setMathScore(int score){
    _mathScore = score;
}


int main(){
    cout << "class practice" << endl;

    Person person1;
    cout << "class person1 name : " << person1._name << endl;
    cout << "class person1 age : " << person1._age << endl;
    cout << "class person1 getKoreaScore : " << person1.getKoreaScore() << endl;
    person1.setKoreaScore(80);
    cout << "class person1 getKoreaScore : " << person1.getKoreaScore() << endl;


    Person person2("csh",35,100,100);
    cout << "class person2 name : " << person2._name << endl;
    cout << "class person2 age : " << person2._age << endl;
    cout << "class person2 getKoreaScore : " << person2.getKoreaScore() << endl;
    cout << "class person2 getEnglishScore : " << person2.getEnglishScore() << endl;
    cout << "class person2 getMathScore : " << person2.getMathScore() << endl;

    return 0;
}