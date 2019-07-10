#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str = "C++ style"; //c++에서는 string class를 구현해놓았다.
    cout << "str : " << str << "\n";

    string copy = str;
    cout << "copy : " << copy << "\n"; //복사도 개쉽다.
    cout << "copy.size() : " << copy.size() << "\n"; //사이즈 측정도 개쉽다. strlen과 동일.

    string com = str+copy;
    cout << "com : " << com << "\n"; //결합도 개쉽다. c++ 만세
    cout << "str : " << str << "\n"; //원래 변수에는 영향이 가지 않았다.
    cout << "copy : " << copy << "\n"; //원래 변수에는 영향이 가지 않았다.

    if(copy == "C++ style"){
        cout << "It's a same value" << "\n"; //동일한 값이다. 비교마저 쉽다 지져스
    }

    cout << "Find : " << copy.find("sty") << "\n"; //find는 단어를 검색하고 offset을 반환

    string path = "D:\\work\\c++\\cpp\\string\\cppstyle.cpp";
    int len = path.size();
    string ext = path.substr(len-4,4); //첫번째 인자 : startpoint, 두번째 인자 : length
    cout << "extention = " << ext << "\n";

    return 0;
}

//원티드 TjQ6woxEg5 ㅋㅋ