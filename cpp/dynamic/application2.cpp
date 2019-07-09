#include <iostream>
#include <string.h>
using namespace std;

char* CoutWord(const char* src, int len){
    char coutWord[8]; //application.cpp와는 다르게 동적 메모리 할당을 하지 않은채 실험

    for(int i=0; i<len; i++){
        coutWord[i] = src[len];
    }

    coutWord[len] = '\0';
    return coutWord;
}

int main()
{   
    char testWord[] = "testword";

    //문자열을 리턴 받았을 것이라 생각하지만, 배열의 주소값을 받아도 이미 함수가 종료되며 소멸된 문자열이기 때문에 출력되지 않는다.
    char* words = CoutWord(testWord,8);
    cout << "testWord : " << testWord << endl;
    cout << "words : " << words << endl;

    return 0;
}