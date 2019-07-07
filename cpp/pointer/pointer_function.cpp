#include <string.h>
#include <iostream>
using namespace std;

int sum(int atest, int* btest); //main보다 하단에 지정한 함수를 main에서 호출하기 위한 선언(?)

void callA(void (*test)(int), int); //함수를 매개변수로 받는 callA함수 선언
void print_func(int bbb); //함수를 매개변수로 받는 callA함수 선언

typedef void (*callTest)(int); //사용자정의 타입으로 void값을 리턴하면서 인자로 int값을 받는 포인터변수 타입 callTest를 선언.

void callC(callTest test_func, int);
void callD(int bbb);

int main()
{
    int aa = 5;
    int bb = 10;
    int result = sum(aa, &bb); //주소값을 보내야 하는 이유. sum함수는 두번째 매개변수가 포인터타입. 

    cout << "result = " << result << "\n";

    callA(print_func, 10); //인자로 함수 넘기기
    callC(&print_func, 20); //함수는 본디 주소값이다. 그러므로 &print_func와 print_func는 동일하지만 주소값임을 명시해주기 위해 전자를 추천.

    return 0;
}

int sum(int atest, int* btest){
    *btest = 15; //주소값을 받아온 포인터 타입이라 값을 바꿔도 그대로 적용된다. 값만 가져온것이 아니다.
    return atest + *btest; //포인터 사용도 충분히 가능하지만 포인트보다 레퍼런스를 사용하는 것이 안전. reference.cpp 를 참조하시오
    //혹시 사용하더라도 포인터타입은 0 으로 초기화 하고, 함수내에서 매개변수로 받을때는 값이 0인지 아닌지 체크하는 등의 습관이 필요. 조심해서 쓰지 않으면 뻗기 때문에!
}

void callA(void (*test)(int), int aaa){//함수타입을 매개변수로 받았다.
    cout << "test = " << test << "\n";
    (*test)(aaa); //(*test)(aaa);는 test(aaa);와 동일하지만 포인터임을 명시해주기 위해 전자를 추천.
}

void print_func(int bbb){//단순히 인트를 출력하는 함수
    cout << "bbb = " << bbb << "\n";
}

void callC(callTest test_func, int aaa){
    cout << "test_func = " << test_func << "\n";
    (*test_func)(aaa);
}