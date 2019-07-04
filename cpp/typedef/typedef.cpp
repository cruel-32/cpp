#include <iostream>
using namespace std;

int main()
{   
    typedef char USER_ID; //사용자 지정 타입 - char
    USER_ID id[20] = "userId";

    typedef char* chp; //사용자 지정 타입 - pointer

    char ids[20] = "test";

    chp idsp = ids; //보통의 타입과 똑같이 사용가능. chp는 char* 와 같다.

    cout << "*idsp = " << *idsp << "\n"; //배열의 포인터는 0번째 요소를 가르키기 때문에 t반환.


    return 0;
}