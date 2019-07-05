#include <string.h>
#include <iostream>
using namespace std;

struct TestStruct {
    int si1;
    int si2;
    char sc;
    float sl;
    int arri[3];
};

struct TestStructBit {
    int stbi : 5; //비트제한두기 바이트 x
    char stbc1 : 8; 
    char stbc2 : 8; 
};

struct Person {
    char name[20];
    char nick;
    int arri[3];
};

void call(struct Person pp){ //구조체의 멤버들도 복사해온다. 메모리 성능 저하를 발생시킬 수 있으므로 실 사용할 때에는 레퍼런스 사용하는 것이 좋다.
    cout << "pp.name : " << pp.name << "\n";
    cout << "pp.nick : " << pp.nick << "\n";
    cout << "pp.arri[0] : " << pp.arri[0] << "\n";

    //값변경
    //복사해온 값이기 때문에 변하지 않는다.
    strcpy(pp.name, "홍길동");
    pp.nick = 'b';
    pp.arri[0] = 50;
};

int main()
{
    TestStruct s1 = {10, 20, 'c', 0xf2f, {0,1,2}}; //구조체 선언과 초기화.
    TestStruct s2;  //구조체 선언.
    TestStruct s3;  //구조체 선언.

    cout << "s1.si1 : " << s1.si1 << "\n";
    cout << "s1.si2 : " << s1.si2 << "\n";
    cout << "s1.sc : " << s1.sc << "\n";
    cout << "s1.sl : " << s1.sl << "\n";

    int sum = s1.si1 + s1.si2;
    cout << "s1.si1 + s1.si2 : " << s1.si1 + s1.si2 << "\n";


    s2 = s1; //복사가 일어난다
    s2.si1 = 15; //값을 바꿔도 원본에 영향이 없다.

    cout << "s1.si1 : " << s1.si1 << "\n";
    cout << "s2.si1 : " << s2.si1 << "\n";

    //그렇다면 원시타입이 아닌 배열도 영향이 없을까?

    for(int i=0; i<sizeof(s1.arri)/sizeof(s1.arri[0]); i++){
        s1.arri[i] = 1; //c++에서 배열은 배열 전체를 초기화 하는게 불가능. 이렇게 각 원소를 수정해준다.
        cout << "s1.arri[i] : " << s1.arri[i] << "\n";
    }

    //전혀 없다. 배열마저 참조가 아닌 복사가 일어난다.
    for(int i=0; i<sizeof(s2.arri)/sizeof(s2.arri[0]); i++){
        cout << "s2.arri[i] : " << s2.arri[i] << "\n";
    }

    s3 = {s2.si1, s2.si2, s2.sc, s2.sl, {4,5,6}}; //다만 배열을 이런 방식으로 복사가 되지 않는다.
    //구조체의 원소를 각각 복사해보았다.
    cout << "s3.si1 : " << s3.si1 << "\n"; //잘 복사됨
    cout << "s3.si2 : " << s3.si2 << "\n";
    for(int i=0; i<sizeof(s3.arri)/sizeof(s3.arri[0]); i++){
        cout << "s3.arri[i] : " << s3.arri[i] << "\n";
    }


    TestStructBit stb = {3,'a','c'};

    cout << "stb.stbi : " << stb.stbi << "\n";
    cout << "stb.stbc1 : " << stb.stbc1 << "\n";
    cout << "sizeof(stb) : " << sizeof(stb) << "\n";


    Person p = {"아무개", 'a', {10,11,12}}; //구조체 선언과 초기화.
    cout << "p.name : " << p.name << "\n";
    cout << "p.nick : " << p.nick << "\n";
    cout << "p.arri[0] : " << p.arri[0] << "\n";

    call(p);

    cout << "p.name : " << p.name << "\n"; //call에서 값을 변경했지만 영향을 미치지 않는다. 참조가 아닌 값 복사였기 때문
    cout << "p.nick : " << p.nick << "\n";
    cout << "p.arri[0] : " << p.arri[0] << "\n";

    return 0;
}
