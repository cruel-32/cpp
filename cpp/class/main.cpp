#include <iostream>
using namespace std;

#include "Person.h"
#include "NeedConstructor.h"
#include "InlinePosition.h"
#include "ConstTest.h"

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

    ConstTest ct(10,20);
    // const ConstTest ct(10,20);

    //객체를 const로 선언시 const로 된 멤버함수만 호출 가능
    // cout << "ct.getX() : " << ct.getX() << endl;

    cout << "ct.getConstX() : " << ct.getConstX() << endl;

    //멤버함수에 대한 포인터
    typedef void(InlinePosition::*IpSetX)(int);
    IpSetX ipSetX = &InlinePosition::setX;
    (ip.*ipSetX)(100);
    cout << "ip.getX() : " << ip.getX() << endl;

    //그렇다면 함수를 매개변수로 받는 함수는 어떻게 실행하면 될까
    InlinePosition testIp(123,2);
    InlinePosition testIp2(110,220);
    //인스턴스까지 같이 넘기면 실행할 수 있는데
    //인스턴스를 안넘기면 실행이 불가능...
    cout << "getExternalX : " << testIp2.getExternalX(testIp, testIp.getX) << endl;


    return 0;
}
