#include <string.h>
#include <iostream>
using namespace std;
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

    return 0;
}