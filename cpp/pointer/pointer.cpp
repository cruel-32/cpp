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
    
    return 0;
}