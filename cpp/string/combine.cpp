#include <string>
#include <iostream>
using namespace std;

int main()
{
    char cstyle[] = "Are you a string, too?";
    string cppstyle;

    cppstyle = cstyle; //그냥 c -> c++ 의 경우에도 대입만 해도 쉽게 복사가 된다.

    cout << "cstyle : " << cstyle << endl;
    cout << "cppstyle : " << cppstyle << endl;

    string cppstylep = "Yes, Iam.";
    const char* cstylep = NULL;

    cstylep = cppstylep.c_str(); //c스타일의 문자열 주소를 반환한다.
    
    cout << "cppstylep : " << cppstylep << endl;
    cout << "cstylep : " << cstylep << endl;


    char test[] = "this is a test word";


    return 0;
}

//원티드 TjQ6woxEg5 ㅋㅋ