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

    char korean[] = "한국어"; //utf-8 한국어는 3바이트다
    cout << "korean = " << korean << "\n";
    cout << "sizeof(korean) = " << sizeof(korean) << "\n";
    cout << "strlen(korean) = " << strlen(korean) << "\n";
    return 0;
}