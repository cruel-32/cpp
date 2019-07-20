#include <iostream>
using namespace std;

#include "Person.h"
#include "NeedConstructor.h"
#include "InlinePosition.h"

int main(){
    cout << "class practice" << endl;

    Person person1;
    cout << "class person1 name : " << person1._name << endl;
    cout << "class person1 age : " << person1._age << endl;
    cout << "class person1 getKoreaScore : " << person1.getKoreaScore() << endl;
    person1.setKoreaScore(80);
    cout << "class person1 getKoreaScore : " << person1.getKoreaScore() << endl;

    Person person2("pointer name!!", 20, 100, 100, 100);
    cout << "class person2 name : " << person2._name << endl;
    cout << "class person2 age : " << person2._age << endl;
    cout << "class person2 getKoreaScore : " << person2.getKoreaScore() << endl;
    cout << "class person2 getEnglishScore : " << person2.getEnglishScore() << endl;
    cout << "class person2 getMathScore : " << person2.getMathScore() << endl;

    NeedConstructor nc1;
    cout << "nc1.maxCount : " << nc1.maxCount << endl;
    cout << "nc1.ref : " << nc1.ref << endl;
    cout << "nc1.twice : " << nc1.twice << endl;

    int mc2 = 20;
    int r2 = 10;
    NeedConstructor nc2(mc2, r2);
    cout << "nc2.maxCount : " << nc2.maxCount << endl;
    cout << "nc2.ref : " << nc2.ref << endl;
    cout << "nc2.twice : " << nc2.twice << endl;
    r2 = 50;
    cout << "nc2.ref : " << nc2.ref << endl;


    InlinePosition ip(10,10);

    cout << "ip.getX() : " << ip.getX() << endl;
    ip.setX(20);
    cout << "ip.getX() : " << ip.getX() << endl;

    cout << "ip.getY() : " << ip.getY() << endl;
    ip.setY(20);
    cout << "ip.getY() : " << ip.getY() << endl;

    return 0;
}