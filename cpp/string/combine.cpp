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
    const char* cstylep = cppstylep.c_str(); //c++ -> c 스타일로 읽기전용으로 읽어들일 경우 c_str사용

    cout << "cppstylep : " << cppstylep << endl;
    cout << "cstylep : " << cstylep << endl;

    return 0;
}

//원티드 TjQ6woxEg5 ㅋㅋ