#include <string.h>
#include <iostream>
using namespace std;


//오버로딩의 규칙
//어떤 함수를 호출할지 결정하는 규칙
//1.같은 함수병이지만 가장 어울리는 시그니처를 가진 함수를 호출한다. 
// int max(char aaa, int bbb); //2번째 매개변수가 int에 가까우면 이 함수를 호출
// double max(char aaa, double bbb); //2번째 매개변수가 double에 가까우면 이 함수를 호출

//2.반환값만 틀린 경우에는 오버로드 불가능
// int max(char aaa, int bbb); //아래 함수와 시그니처가 같기 때문에 오버로드를 할 수 없다.
// double max(char aaa, int bbb); 

//3.시그니처가 다르더라도 아래와 같다면 어떤 것을 호출해야 할지 알 수 없다. 
// void max(int i);
// void max(int& i);

int main()
{
    //오버로딩 테스트1
    // void CallFunc(int n);
    // CallFunc('A'); //타입이 다르지만 문법상 오류가 없는 호출이기 때문에 호출 된다.

    //오버로딩 테스트2
    //그렇다면 아래와 같다면?
    // void CallFunc2(int m);
    // void CallFunc2(char m);

    //이와 같은 방식으로 구분 할 수 있기 때문에 오버로드가 가능하다.
    // CallFunc2( (int) 'A');
    // CallFunc2( (char) 'A');

    //즉, 아래와 같은 우선순위로 함수를 호출한다.
    // 1.정확하게 일치하는 경우
    // 2.승진에 의한 형변환
    // 3.표준 형변환
    // 4.사용자에 의한 형변환

    return 0;
}
