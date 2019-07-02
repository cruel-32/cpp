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

    return 0;
}