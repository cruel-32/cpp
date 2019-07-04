#include <string.h>
#include <iostream>
using namespace std;

int sum(int atest, int* btest); //main보다 하단에 지정한 함수를 main에서 호출하기 위한 선언(?)

int main()
{
    int intA=100, intB=200;
    int* pA = &intA;
    cout << "*pA = " << *pA << "\n";

    int* pB = &intB;
    
    *pB = 300; //포인터가 가르키는 값을 변경하면 그 주소의 값이 변경된다.
    cout << "*pB = " << *pB << "\n";
    cout << "intB = " << intB << "\n";

    pB = &intA;
    cout << "*pB = " << *pB << "\n";

    int a = 100;
    int* iP = &a; //100
    int* r = iP+2; //주소값 +8바이트

    cout << "r = " << r << "\n";

    short arr[5];
    short* sP = &arr[3]; //arr[3]의 주소값
    short* sQ = &arr[0]; //arr[0]의 주소값

    int sr = sP - sQ;//원소 차이를 반환 = 3

    cout << "sr = " << sr << "\n";


    struct ABC {
        int x;
    } abc;

    ABC* abcP = &abc;

    //abc.x의 값을 30으로 바꾸는 방법
    (*abcP).x = 30;

    cout << "abc.x = " << abc.x << "\n";


    //포인터를 가르키는 포인터를 가르키는 포인터
    int in = 5;
    int* pp = &in;
    int** ppp = &pp;
    int*** pppp = &ppp;

    cout << "in = " << in << "\n";
    cout << "pp = " << pp << "\n";
    cout << "*pp = " << *pp << "\n";
    
    cout << "ppp = " << ppp << "\n";
    cout << "**ppp = " << **ppp << "\n";

    cout << "ppp = " << ppp << "\n";
    cout << "***pppp = " << ***pppp << "\n";

    short arrays[5] = {10,11,12,13,14};
    short* ap = arrays; //배열은 원래 주소값이기때문에 &를 붙이지 않고 사용
    cout << "*ap = " << *ap << "\n"; //배열의 0번째 요소값을 가지고 있다.


    int aa = 5;
    int bb = 10;
    int result = sum(aa, &bb); //주소값을 보내야 하는 이유. sum함수는 두번째 매개변수가 포인터타입. 

    cout << "result = " << result << "\n";

    return 0;
}

int sum(int atest, int* btest){
    *btest = 15; //주소값을 받아온 포인터 타입이라 값을 바꿔도 그대로 적용된다. 값만 가져온것이 아니다.
    return atest + *btest; //포인터 사용도 충분히 가능하지만 포인트보다 레퍼런스를 사용하는 것이 안전. reference.cpp 를 참조하시오
    //혹시 사용하더라도 포인터타입은 0 으로 초기화 하고, 함수내에서 매개변수로 받을때는 값이 0인지 아닌지 체크하는 등의 습관이 필요. 조심해서 쓰지 않으면 뻗기 때문에!
}