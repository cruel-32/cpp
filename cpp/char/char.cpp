#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    char c = 'a';
    cout << "sizeof(c) = " << sizeof(c) << "\n";

    wchar_t k = 'a';
    cout << "sizeof(k) = " << sizeof(k) << "\n";


    char str[] = "abcde";
    strcpy(str,"abc");

    cout << "str = " << str << "\n";
    cout << "sizeof(str) = " << sizeof(str) << "\n";
    cout << "strlen(str) = " << strlen(str) << "\n";

    char *test = "testword";
    cout << "test = " << test << "\n";
    cout << "test[0] = " << test[0] << "\n";

    char korean[30] = "korea"; //utf-8 한국어는 3바이트다
    cout << "korean = " << korean << "\n"; //문자열은 korean 같이 변수명을 그대로 보내도 문자열임을 알고 내부적으로 열을 모두 보여준다. 0(NULL)값을 만날때까지... char []가 아닌 char를 보내도 마찬가지다. 조심할것
    cout << "sizeof(korean) = " << sizeof(korean) << "\n";
    cout << "strlen(korean) = " << strlen(korean) << "\n";

    return 0;
}
//원티드 TjQ6woxEg5 ㅋㅋ