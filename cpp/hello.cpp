#include <iostream>

using namespace std;

int main()
{
    int a,b;
    a = 10;
    b = 20;
    cout << "Hello, World!" << ", " << a << ", " << b << ", "<< endl;

    //bitwise 간단 문제. 제 3의 변수 선언 없이 a와 b의 값을 서로 바꿔라
    a^=b;
    b^=a;
    a^=b;
    cout << "어맛 값이 바뀌었어!" << ", " << a << ", " << b << ", "<< endl;

    return 0;
}