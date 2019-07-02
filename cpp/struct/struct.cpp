#include <string.h>
#include <iostream>
using namespace std;

struct Struct {
    int si1;
    int si2;
    char sc;
    float sl;
    int arri[3];
};

int main()
{
    Struct s1 = {10, 20, 'c', 0xf2f, {0,1,2}}; //구조체 선언과 초기화.
    Struct s2;  //구조체 선언.

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

    return 0;
}